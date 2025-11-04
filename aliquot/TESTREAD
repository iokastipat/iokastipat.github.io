ALIQUOT SEQUENCE 

#Description 

The program aliquot calculates the aliquot sequence of any integral, between 1 and 10^15-1,by either showing each term of the sequence or just showcasing it's length. The user can choose how long they want the sequence to be or just choose "0" for the full version. Also, the sequence can not surpass 10^15 nor can it accept a zero for the number the user wants it's aliquot sequence calculated  

#Instuctions on how to run

In order to execute the program, it needs to be compiled first by the command "gcc -o aliquot aliquot.c" in any Linux lab. Afterwards, the program can be executed smoothly and run as intended.

#Usage
 
Upon executing the program, the user will be prompted to give 3 inputs. The first one will be for the integral they want the program to calculate, the second for the maximum length they want the sequence to be and the third for whenever they want each term to be printed on the screen or just show how long the sequence is.  
#Creation process

In order to create a program that successfully calculates the aliquot sequence, a function that evaluates the sum of the proper divisors of each number it's given needs to be created. So,by writing out it's name(sum) and it's type along with the variable it will get as input from the main program,the function has been created. Something that is also important to note is that the function's type is "long long" so it will be able to reach numbers up to 10^15.
Then,after initializing sum to 0,a loop is created to evaluate the sum of the proper divisors of "number". The loops stops at just the half of "number" because it is guaranteed it won't have any other proper divisors past that point.

```c
for ( int i = 1; i <= number/2; i++ ) { 
        if (number % i == 0) { 
                sum += i;
            }
     }
```

Afterwards,an if statement is created to determine whenever the sum has surpassed 10^15,in which case,the function returns 10^15 to signify that it has reached it's limit of numbers it can calculate. If it hasn't,it returns the sum as expected.

```c
 if (sum < 1000000000000000) { 
        return sum;
     } else {
        return 1000000000000000; 
     }  
```
So,now the function has been made and the creation of the main program can start. Before moving to the main commands,the variables need to be defined and for some to be assigned specific values( for example,int c1 = 0). Three additional variables are used asides from the main ones,the first of which is used to stop and start the main loop(random_variable),the second one to count each loop(c1) and the last one to be assigned the value of the number the user first gives out.

After printing out the messages that the exercise states and keeping the user's input into 3 variables,an if statement is created in order to print out the first number of the sequence in case the value of the "choice" variable was f. 

```c

  if ( choice == 'f') {
            printf("%lld\n" , main_number); }
            secondary = main_number;
  }

```
The main loop can now finally start. Inside it,"sum" is called and it calculates the first term of the sequence and return it to the program. In conjunction with that,the counter(c1) is also increased by 1.
Afterwards,the value that the function has returned needs to be verified to not be 10^15. If it is,the programs prints out a warning message and stops the loop(and effectively, the program).    

```c
 if (sum_result == 1000000000000000) { 
                random_variable = 0;
                printf("Number exceeds maximum supported integer (1000000000000000). Stopping\n");
 }

```
In case the function has returned something other than 10^15,then the program chceks whenever the max length that the user has requested has been reached(and it's not the case of the user requesting trhe full length of the sequence,meaning "0") and prints out the length of the sequnece(in case of "l") or the lqast term of it(in case of "f").The random_variable is also changed so the loop can end.

```c
       if (max_length==c1 && max_length!=0) { 
                 random_variable = 0;
                 if (choice == 'l') {
                    printf("%d\n", c1);
                } else if (choice == 'f') {
                    printf("%lld\n", sum_result);
                 }  

```
If the max length hasn't been reached yet,then the program simply prints out the next term of the sequence.

Lastly,in order to stop the loop if the sequence has stopped,the program checks if what the function has returned is zero and prints the length of it,if the user has requested it and then it stops the loop in any case. 

```c
 if (secondary == 0) { 
                        if (choice == 'l') { 
                            printf("%d\n", c1);
                            random_variable = 0; 
                         }
                        else if (choice == 'f') { 
                            random_variable = 0;
                         }
  }

```
So,now the program is ready and it is able to calculate the aliquot sequence as mentioned in the description.




  

       






