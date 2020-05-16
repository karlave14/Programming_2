# Control Srtructures 
The flow of control through any given function is implemented with three types of control structures:
* **Sequential** 
* **Selective** 
* **Iterative**

## **Sequential Control**
Sequential execution of code statements (one line after another) -- following a procedure.

    int main()
    {

        statements
    }

## **Selective Control Structures**
Used for decisions -- choosing between 2 or more alternative paths.
* If statements 
    * Simple conditional 
    * Double Conditional
    * Multiple Conditional 
    * Nested Conditional
* Switch statment

### **If Statements**
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

### Simple Conditional

The expression part can be any expression that evaluates a value, and it must be enclosed in parenthases.
* The best use is to make the expression a Boolean expression, which is an operation that evaluates to **true** or **false**
* For other expression (like (x+y), for instance):
    * an expression that evaluates to 0 is considered **false**
    * an expression that evaluates to anything else (non-zero) is considered **true**

### Double Conditional
#### **If... else statement**
 When **if** statement is false can to execute other intruction, 
 The "else" statement effectively says that whatever code after it (whether 
  a single line or code between brackets) is executed if the if statement is FALSE.
 Syntaxis: 

    if(expression)
        statement
    else
        statement

### Multiple Conditional
#### **If... else if... else statement**
Use of **else is** when there are multiple conditional statements 
 that may all evaluate to true, yet you want only one if statement's body to execute.
 *  If the first statement is true, the "else if" will be ignored, but if 
 the if statement is false, it will then check the condition for the else if statement. 
 If the if statement was true the else statement will not be checked
 Syntaxis:
    if(expression)
        statement
    else if(expression)
        statement
    ....
    else
        statement

### Nested Conditional
    if(expression)
    {
        if(expression)
            statement

        statements
    }
    else
    {
        if(expression)
            statement
        else
            statement
    }

### **Switch Statement**
A switch statement is convenient for occasions in which there are multiple cases to choose from. The syntax format is: 

    switch(expression)
    {
        case *constant*:
            statements
        case *constant*:
            statements
    ... 
        default:         // optional
            statements
    }

* The switch statement evaluates the expression, and then compares it to the values in the case labels. If it finds a match, execution of code jumps to that label 
* If you want to execute code only in that case that you jump to, end the case with a *break* statement, otherwise execution of code will "fall through" to the next case. 

### **The Conditional Operator**
There is a special operator known as the conditional operator that can be used to create short expression that work like if.. else statements.

    test_expression ? true_expression : false_expression

How it works: 
* The test_expression is evaluated for true/false value.
* If the test expression is true, the operator returns the true_expression
* If the operator is flase, the operator returns the false_expression

## **Iterative Control Structures**
Also repition control structures. Used for looping, i.e.  repeating a piece of code multiple times in a row.

### **For Statments**
* The *for* loop is most convenient with coutning loops -- i.e. loops that are based on a countinf variable, usually a known number of iterations

How it works:
* The *initial condition* runs one, at the start of the loop.
* The *test expression* is checked (just like the expression in a *while* loop). If it's false, quit. If it's true, then:
    * Run the loop body
    * Run the *iterative statement*
    * Go back to the *test expression* and repeat

#### **For Statement**
    for(initial_condition; test_expression; iterative_statement)
    {
        statements
    }

#### **Nested For**
    for (initial_condition; test_expression; iterative_statement)
    {
        for(initial statement; test expression; increment/decrement)
        {
        statements
        }
    statements
    }

### **While and Do... While**
How they work: 
* The expression is a test condition that is evaluated to decide whether the loop should repeat or not. 
    * *true* means run the loop body again
    * *false* means wuit

The *while* and *do... while* loops both follow the same basic flowchart -- the only exception is that: 
    * In a *while* loop, the expression is tested first
    * In a *do... while* loop, the loop "body" is executed first

### While
    while(expression)
    {
        statements
    }

### Do... While
    do
    {
        statements
    }
    while(expression);

## *Break and Continue*
These statements can be used to alter the flow of control in loops, although they are not specifically needed. (Any loop can be made to exit by writing an appropiate test expression)

### Break
This cause immediate exit from any loops (as well as from *switch* blocks

Example: 

    for(i=1; i<=10, i++)
    {
        if(i==5)
            break;

        printf("%d", i);
    }

Output:
1 2 3 4 5

### Continue
When used in a loop, this statement causes the current loop iteration to end.
* In a *while* or *do... while* loop, the rest of the body is skipped, and execution moves on to the *test condition*
* In a *for* loop, the rest of the loop body is skipped, and execution moves on to the *iterative statement*

Example:

    for(i=1; i<=10; i++)
    {
        if(i%2==0)
            continue;

        printf("%d",i);
    }

Output: 1 3 5 7 9

#### References 
* [Selective Statements](https://www.cs.fsu.edu/~myers/c++/notes/control1.html)
* [Iterative Statements](https://www.cs.fsu.edu/~myers/c++/notes/control2.html)
* [Break and Continue](https://www.cs.fsu.edu/~myers/c++/notes/control2.html)

