# Pluralize
2.1 Pluralize It
Write a program called pluralize.c.

Level 1
Ask the user for a number, then a word, and then print out a phrase that depends on the number and the word. Your output should look exactly as it is below.

 

You should pluralize the word by adding an “s” to the end whenever they enter a number that is 0 or greater than 1.

 

You’ll need to implement an if/else statement in your code, since you don’t want to pluralize the word in every instance!

 Examples:
Enter number: 0

Enter word: bat

0 bats

 

Enter number: 1

Enter word: cat

1 cat

 

Enter number: 4

Enter word: dog

4 dogs

 

Boss Level
Continue using pluralize.c. Add on to the solution for this problem.

 

Not every word is made into plural form by adding an ‘s’ at the end. Some words that have special rules when it comes to making them plural.

 

Example: plural of “catch” is “catches”.

 

In your code, if the user enters one of the special words, instead implement the special rule. If the word isn’t one of the special 4 words, just add an ‘s’ to the end like you did in Level 1.

 

Let’s implement some more advanced rules:

 

Word ends in:

Becomes:

Example

-ife

-ives

life -> lives

-sh/ch

-shes/ches

bush -> bushes 

church -> churches

-us

-i

cactus -> cacti

-ay/oy/ey/uy

-ays/oys/eys/uys

guy -> guys 

toy -> toys 

key -> keys 

way -> ways

-y

-ies

fly -> flies

everything else

add -s

hat -> hats

 

You’ll need a series of conditional if/else statements to handle each rule. Make sure you’re careful with your ordering, since some of these rules overlap!

Hints
Read input with scanfLinks to an external site. or fgets
Compare strings with strcmpLinks to an external site.
String lengths are given with strlenLinks to an external site.
In order to determine if a string ends with another string, you will have to write a function called ends_with(const char* s, const char* t) that returns true if s ends with t.
