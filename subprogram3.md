
## Chapther 3
### Subprograms

*is a program inside any larger program that can be reused any number of time*

A subprogram **is a secuence of instructions** whose execution is invoked from one or more remote locations
in a program, with the espection that when the when the subprogram execution is complete, execution resumes
at the instructuion after the one that invoked the subprogram.

* In **high-level languages** subprograms are also called subroutines, procedures, and functions.
* In **object-oriented languages** they are usually called methods or constructors.
* In most **modern high-level languages** subprograms can have parameters, local variables, and returned values.
* At the **assembly language level** use of subprograms requires subprogram linkage protocols.

#### Characteristics of a subprogram
        1. A Subprogram is implemented using the Call & Return instructions in Assembly Language.
        2. The Call Instruction is present in the Main Program and the Return(Ret)
           Instruction is present in the subprogram itself
        3. It is important to note that the Main Program is suspended during the execution of any subprogram
           Moreover, after the completion of the subprogram the main program executes from the next sequential
           address present in the Program Counter.
        4. For the implementation of any subprogram, a “Stack” is used to store the “Return Address”
            to the Main Program.
        5. The Main advantage of Subprogram is that it avoids repetition of Code and allows us to reuse
           the same code again and again.
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         

