/**
 * @file prototype.h
 * 
 * @author Rahul S Iyer (https://github.com/Rahul-S-Iyer)
 * 
 * @brief This is a quiz game played offline for entertainment
 * 
 * @version 0.1
 * 
 * @date 2021-04-13
 * 
 * 
 * 
 */


#ifndef __PROTOTYPE_H__
#define __PROTOTYPE_H__


#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

/**
 * @brief Shows the score of the participant 
 * 
 */
extern void show_record();

/**
 * @brief Resets the score back to zero 
 * 
 */
extern void reset_score();

/**
 * @brief Updates the file with the highest score
 * 
 */
void edit_score(float , char []);

/**
 * @brief shows the rules of the game
 * 
 */
void help();

#endif
