catsays
=======

A variation on [cowsay](http://en.wikipedia.org/wiki/Cowsay), written in C.

The program takes a string as an argument, and will return it in the speech bubble of an ASCII cat. It cannot accept strings that contain words more than 29 characters in length.

Written mainly as an exercise in learning C.

Sample output:

```
$ catsay 'Hello there! I am a cat. Meow Meow!'
 ______________________________
[ Hello there! I am a cat.     ]
[ Meow Meow!                   ]
 ------------------------------
   \  |\___/|
    \ | . . |
      ((>^<))
       }   {   ))
       |    \ ((
       | v   \ ))
       | | |  \(
       (_(_)_(_)
```
