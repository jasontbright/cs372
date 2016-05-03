CS 372 Spring 2016 Assignment 4
Jason Bright

git repository:
https://github.com/jasontbright/cs372.git
git@github.com:jasontbright/cs372.git

In this assignment I chose to impliment the Chain of Responsibility design pattern.

In this case, a "Name Handler".  This object takes a name in the form of a string, then processes it using a succession of handlers, each of which either handles the string, or passes it on to the next handler.
For example, it currently first checks for a blank string - no name found.  Then it checks to see if the first letter is a capital, and asks if you want it capitalized.  Then it checks to see if "Glenn Chappell" is the name presented, first or last, then says "Hello Teacher!" if found.  

Otherwise, it will complain that it doesn't know what to do.

At this point, adding more functionality is merely writing code that recognizes the correct trigger and handles it.  Then put the object in the proper order for the chain.

I must say, I actually like this - if I discover some 'bug' I just need to write a handler for it and put it in the list.  Done.

Used research and code(heavily modified) from 
https://sourcemaking.com/design_patterns/chain_of_responsibility/cpp/1
http://www.dofactory.com/net/chain-of-responsibility-design-pattern
http://www.codeproject.com/Articles/41786/Chain-of-Responsibility-Design-Pattern
