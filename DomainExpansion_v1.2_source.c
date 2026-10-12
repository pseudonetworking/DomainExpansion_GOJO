#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// WARNING, EXTREME MODE CAN AND WILL CRASH YOUR SYSTEM! ONLY SELECT EXTREME MODE ON A VM OR THROWAWAY MACHINE!
// again, i'm not kidding. make sure any important stuff is saved and closed before you play.

int main(void){
    srand(time(NULL)); // SETS THE SEED FOR 'RANDOM' TO PC TIME. IF YOURE SMART YOU CAN EXPLOIT/CRACK THIS *WINK WINK*
    char qte [14];
    char diff;
    char user_qte_input [14];
    char playagain = 'y';
    char ready;
    char interest;

//basic check for educational interest
        while(1){
        printf("Are you interested in the logic behind the game? (Good to understand how the game works.\n)");
        printf("\n Type Y for Yes, or N for No. C for credits.\n");
        scanf(" %c" , &interest);
        if(interest == 'Y' || interest == 'y'){
            //small knowledge dump
            printf("DomainExpansion is a small minigame written in the coding language 'C'.\n");
            printf("\nC is a compiled low/mid level language. This game was translated to machine code by a compiler so the computer understands.\n");
            printf("\nIn the normal difficulty, there is no risk to hardware. Game lost works by triggering a segmentation fault in the program.\n");
            printf("\nWhat is a segmentation fault? A segmentation fault is a runtime error that occurs when a program attempts to access a memory location that it is not allowed to.\n");
            printf("\nThink of memory location as mailboxes. A segmentation fault is like someone trying to break into your mailbox. The police (your machine in this case) stops them.\n");
            printf("\nExtreme difficulty works by leaving a mailbox open and having people overfill it with mail. The police wont stop them because the mailbox was left open.\n ");
            printf("\n -----------END OF EDUCATIONAL----------\n");

        } else if(interest == 'N' || interest == 'n'){
           break;
        } else if (interest == 'c' || interest == 'C'){
          printf("\n========================================\n");
                printf("           DOMAIN EXPANSION             \n");
                printf("         THE C-Based Minigame             \n");
                printf("----------------------------------------\n");
                printf(" Developed by: JCR      \n");
                printf(" Inspired by: Jujutsu Kaisen \n");
                printf(" Built purely in C.  \n");
                printf(" Special thanks to you, the player!,\n");
                printf(" Theres a secret that is based on JJK lore in this game... try to find it!\n");
                printf("\n========================================\n");
        }
        else {
            printf("\nInvalid option... try again...\n");
        }
    }

    // BEGINNING OF MAIN GAME LOOP
    while(playagain == 'y'){
        
        printf("\nWelcome to DomainExpansion, a C based minigame. select your difficulty level to continue.\n");
        printf("\n (N)ormal mode: Safe, DomainExpansion crashes on game lost. No tampering with your hardware.\n");
        printf("\n (E)xtreme mode: !DANGEROUS! Your OS will crash on game lost. YOU MAY LOSE OR CORRUPT DATA ON YOUR SYSTEM! USE CAUTION!\n");
        scanf(" %c" , &diff);
        if(diff == 'N' || diff == 'n'){
            printf("\nNormal difficulty selected.\n");
            //readiness checker
            while(1){
            printf("\n Are you ready? Y for yes, or any other key for No.\n");
            scanf(" %c" , &ready);
            if(ready == 'y' || ready == 'Y'){
                break;
            } else {
                printf("\nType 'Y' or 'y' when ready.\n");
            }
        }
        }
        //SETTING UP 'RANDOMIZER'
        char charset[] = "abcdefghijklmnopqrstuvwxyz1234567890";
        char extreme_charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
        int qte_length = 8;

        for(int i =0; i < qte_length; i++){
            if(diff == 'N' || diff == 'n'){
                //normal charset has 36 characters total. 26 letters and 10 numbers.
                qte[i] = charset[rand() % 36];
            } else {
                //extreme charset has 62 characters total. all lowercase + uppercase letters plus 10 numbers.
                qte[i] = extreme_charset[rand() % 62];
            }
        }
        qte[qte_length] = '\0';
        //Displaying generated QTE to the player
        printf("\nRYOIKI TENKAI\n");
        printf("\n(DOMAIN EXPANSION)\n");
        printf("\nMURYOKUSHO\n");
        printf("\n(UNLIMITED VOID)\n");
        printf("\n***DEFEND YOURSELF! TYPE THE QTE BACK!***\n");
        printf("\n-------------------------\n");
        printf("\n %s\n" , qte);
        printf("\n-------------------------\n");
        scanf(" %[^\n]" , user_qte_input);
        if(strcmp(user_qte_input, "SIMPLE DOMAIN") == 0 || strcmp(user_qte_input , "simple domain") == 0){
            printf("\n SIMPLE DOMAIN LAUNCHED!\n");
            printf("\n ***You deployed a secret countermeasure!**\n");
            //PLACEHOLDER BLOCK FOR SIMPLE DOMAIN SECTION- START
            printf("\nYou aren't supposed to be here yet. Check back after another update :)\n");
            //PLACEHOLDER BLOCK FOR SIMPLE DOMAIN SECTION- END
        } else if(strcmp(user_qte_input, qte) == 0){
            printf("\n***YOU DEPLOYED YOUR DOMAIN WITHIN A SPLIT SECOND!***\n");
            printf("Congratulations! You survived Gojo's Unlimited Void!");

            //-Aftermatch prompt BLOCK BEGIN-

            //-AFTERMATCH PROMPT BLOCK END-

        } else {
            printf("\n***YOU FAILED TO DEPLOY YOUR DOMAIN IN TIME!***\n");
            fflush(stdout);
            //Program will wait 5 seconds
            time_t start_time = time(NULL);
            while(time(NULL) - start_time < 5){
                //Listen to some music or something... for 5 seconds...
            }
            //-SEGFAULT LOGIC BLOCK BEGIN- reminder that normal mode should trigger segfault while extreme doesnt.
            if (diff == 'N' || diff == 'n'){
                printf("\n You feel your synapses frying... you can't physically process infinite information...\n");
                int *bad_pointer = NULL;
                int trigger_crash = *bad_pointer;
                (void)trigger_crash; 
                //-SEGFAULT LOGIC BLOCK END-
            } else {
                //-OVERFLOW LOGIC BLOCK START-
                printf("\nYou feel your synapses frying... you can't physically process infinite information...\n");
                printf("\nYou know everything the universe has to offer you... but at what cost...?");
                fflush(stdout);
                //Same as before setting 5 seconds of delay...
                time_t start_time = time(NULL);
                while(time(NULL) - start_time < 5){
                    //pc says night night :D
                }

                //LOGIC HERE WILL CHEW RAM UNTIL YOUR SYSTEM RUNS OUT OR CRASHES! VERY DANGEROUS!
                while(1) {
                    //50MB chunks repeatedly, to rapidly take up RAM space.
                    void *overflow_memory = malloc(1024 * 1024* 50);

                    //below we write a force crasher just in case your system blocks allocating resources initially. This will trigger a page fault.
                    if (overflow_memory != NULL){
                        //interacting with memory here so your OS actually assigns RAM pages...
                        volatile char *p = (char *)overflow_memory;
                        for(int j = 0; j < (1024 * 1024 * 50); j += 4096) {
                            p[j] = 1;
                        }  
                    }
                }
            }

            //-OVERFLOW LOGIC BLOCK END-
        }
        
    }
}