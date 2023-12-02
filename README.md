UC Merced
CSE 30 - Data Structures
Kyrilov

# TicTacJoe
Project with TicTacJoe


Create a fully working tic-tac-toe game, similar to the one demonstrated in lectures. It should have the following features:

Ability to play against another human player
Ability to play against a weak computer player
Ability to play against a more sophisticated computer player
Requirements

There must be a menu, where users can select options, similar to the one shown in lectures. The options should include a choice of opponent (human/computer) and computer opponent difficulty level.
The game should use the GameState object provided to store state.
The simple computer player should be a function with the following signature: Vec validMove(GameState game); where Vec is a struct that holds two integers, one for row and one for column. This represents the position in the grid where the player whose turn it is should play.
The sophisticated player should be a function: Vec findBestMove(GameState game), possibly with additional parameters which should all have default values, so that the function can be called with only a GameState object.
The sophisticated player should be unbeatable. That is to say, it can not be beaten in a game of tic-tac-toe. It does not have to always win, but it should never lose. If playing against a competent player, games should generally end in a draw.
Clarifications

There are no unit tests provided here, and there is no autograding.
This is a group project, with each group having 5 members.
Every member of the group must contribute code, which they develop on their own STEAMplug workspace.
All individual contributions should be amalgamated onto a single member's workspace, and submitted from there. Once again, even though only one member is required to submit, every member is required to contribute code, that they have developed in their own workspace.
The completed project must be uploaded before the deadline.
