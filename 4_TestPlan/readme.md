# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01|Display of Menu| None | "Menu(1).start game(2).show highest score(3).reset score(4).help(5).quit" | PASS | Scenario|
|  H_02|Initiation of the game |"1.Character ’S’ from the user 2. Name the participant" | Questions|PASS|Requirement based |
|  H_03|Show Scorecard | "1.Character’V’ from the user| Displays the name and the highest score of the participant |SUCCESS|Requirement based |
| H_03_01| Resetting the score| (1).Character’R’ form the user | Displays the name and resets the score to zero | SUCCESS | Requirement based |
| H_04| Check if the help option is working | 1.Character’H’ from the user | Displays the rules of the quiz game |SUCCESS| Scenario |
|H_05| Check if the quit option works well|Character’Q’ from the user|Exit out of the program|SUCCESS|Scenario|



## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01|H_02|In the warm up round minimum number of question must be answered to go to challenge round| Users choice for the given question| Qualified to the challenge round| SUCCESS |Requirement based |
|  L_02|H_02|Challenge round where questions are asked and scores are awarded to the participant.|Users choice for the given question|The name and score of the participant|SUCCESS|Requirement based|
|  L_03 |H_02|For any wrong answer the participant comes out of the game| Users choice for the given question|(1).The name and score of the participant(2).Option to navigate back to main menu or restart the game" | SUCCESS |Requirement based|
