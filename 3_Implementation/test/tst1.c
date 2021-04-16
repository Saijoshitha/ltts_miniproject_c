#include "unity.h"
#include "unity_internals.h"
#include<stdio.h>
#include "a.h"





	void setUp()
	{	}
	void tearDown()
	{	}
	
	
	void test_show_record(void)
	{
		char* name="Joshi";
		float scr=1000000;
  		TEST_ASSERT_EQUAL(\n\n\t\t Joshi has secured the Highest Score 100000",name,scr, show_record());
		char* name="Tanish";
		float scr=1000000;
  		TEST_ASSERT_EQUAL(\n\n\t\t Tanish secured the Highest Score 1000000",name,scr, show_record());
		char* name="Kamala";
		float scr=1000000;
        TEST_ASSERT_EQUAL(\n\n\t\t Kamala has secured the Highest Score 1000000",name,scr, show_record());                         
	}
               
	int main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_show_record);
  		return UNITY_END();
	}
