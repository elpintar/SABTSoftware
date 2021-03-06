/**
 * @file MD3.h
 * @brief definitions for mode 3
 * @author Nick LaGrow (nlagrow)
 * @author Alex Etling (petling)
 * @author Kory Stiger (kstiger)
 */

#ifndef _MD3_H_
#define _MD3_H_

// State machine constants
#define STATE_NULL 0x00
#define STATE_MENU 0x01
#define STATE_GENQUES 0x02
#define STATE_PROMPT 0x03
#define STATE_INPUT 0x04
#define STATE_CHECK 0x05
#define STATE_REPROMPT 0x06

#define PRIME                	53

// Submode constants
#define SUBMODE_NULL 0x00
#define SUBMODE_PLAY 0x01
#define SUBMODE_LEARN 0x02

#define MAX_INCORRECT_TRIES_1 3
#define MAX_INCORRECT_TRIES_2 6

//static char last_dot;                             // char representing last big dot pressed
// Int array representing the animals that have been used already.
int animals_used_list[11];                 
// Keeps track of number of animals used in current rotation
int animals_used;                          
char* animal;                              // Name of current animal

//char entered_letter;                       // Current letter being entered
// Keeps track of how long the user entered word is
int length_entered_word;                   
// Used to read back the letters in the current word
int current_word_index;
//bool to determine state transition
bool got_input;
//stores the sub-mode the game is played in 

//mode selected or not


void md3_main(void);
void md3_reset(void);
void md3_call_mode_yes_answer(void);
void md3_call_mode_no_answer(void);

void md3_input_dot(char thisDot);
void md3_input_cell(char this_cell);
void md3_call_mode_left(void);
void md3_call_mode_right(void);


#endif /* _MD3_H_ */
