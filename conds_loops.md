# Control Structures

 **Index**
* [Control_statemts_in_C](#control_statemts_in_c)
* [If_condition](#if_condition)
* [Else_condition](#else_condition)
* [For_loop](#for_loop)
* [Examples](#examples)

### Control statements in C

 ## IF condition
 The **if** statement allows you to control if a program enters a section of code 
 or not based on whether a given condition is true or false. 
 * The important functions of the if statement is that it allows the program 
   to select an action based upon the user's input.
  A true statement is one that evaluates to a nonzero number and a false statement 
   evaluates to zero. When you perform comparison with the relational operators, 
  the operator will return 1 if the comparison is true, or 0 if the comparison is false. 
   Basic **if** syntax: 

	if(statement is TRUE){
	     code to execute
	}
 ## Else condition
 When **if** statement is false can to execute other intruction, 
 The "else" statement effectively says that whatever code after it (whether 
  a single line or code between brackets) is executed if the if statement is FALSE.
 Syntaxis: 

	´ if( TRUE ){
	  statemens(true);
	  }else{
	  statement(false);
	  }
	
 ## Else if 
Use of **else is** when there are multiple conditional statements 
 that may all evaluate to true, yet you want only one if statement's body to execute.
 *  If the first statement is true, the "else if" will be ignored, but if 
 the if statement is false, it will then check the condition for the else if statement. 
 If the if statement was true the else statement will not be checked
 Syntaxis: 
	
	if( ){
	statements;
	}else if( ){
	statemts; 
	} else{
	statements;
	}

### Loops in C
## For loop
A for loop is a repetition control structure that allows you to 
 efficiently write a loop that needs to execute a specific number of times.
 Syntaxis: 
	
	for(init; condition; increment){
	statements;
	}
	
* **init** > This step allows you to declare and initialize any loop control variables.
* **Condition** >  If it is true, the body of the loop is executed. If it is false, 
 the body of the loop does not execute and the flow of control jumps to the next statement 
* When you  executes, the flow of control jumps back up to the increment statement. 
 This statement allows you to update any loop control variables. 
 This statement can be left blank, as long as a semicolon appears after the condition.
* The condition is now evaluated again. If it is true, the loop executes 
  and the process repeats itself.

## Examples. 

 #### If 
	´c #include <stdio.h>
	if(a>b){
	printf("El mayor es %d", a)
	}
		return 0;
	}

 #### Else if

	´c #include<stdio.h>
	int main(int argc, char** argv){

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	if(num1 > num2){
		printf("El %d es mayor a %d\n", num1, num2);
	}else if(num2 > num1){
		printf("El %d es menor a %d\n", num2, num1);
		}else{
			printf("Son iguales\n");

			}
		return 0;
	}

 #### For

	´c #include <stdio.h>
	int main(){
	int i;
	for(i=1; i<=10; i++){
	printf("Este es el numero: %d \n",i);
	}
	return 0;
	}
