
    // Create a gradebook
    // Display a list of students with names like so:
    //1. Robert Glasper
    //2. Shaun Martin
    //3. Beyonce Knowles
    //4. PJ Morton
    //5. Jill Scott
    //6. Jazmine Sullivan
    //-----------------------
    // Ask the user to select a name by entering a number
    // Then a student class from the list of classes
    //1. Math
    //2. Science
    //3. English
    //4. History
    //5. Music
    //------------------
    // Ask the user to select a class by entering a letter
    // Then the students grade in that class
    // Then display the current state of the gradebook which prints all the students that have been entered, 
    // all their classes and the grade they got in each class
    #include <iostream>
    using namespace std;
    int main() {  

    const int robertGlasper = 1, shaunMartin = 2, beyonceKnowles = 3, pjMorton = 4, jillScott = 5, jasmineSullivan = 6;
      int student;
    
    bool user_selected_robertGlasper = false;
    bool user_selected_shaunMartin = false;
    bool user_selected_beyonceKnowles = false;
    bool user_selected_pjMorton = false;
    bool user_selected_jillScott = false;
    bool user_selected_jasmineSullivan = false;

    int rgMathGrade;
    int rgEnglishGrade;
    int rgScienceGrade;
    int rgHistoryGrade;
    int rgMusicGrade;

    int smMathGrade;
    int smEnglishGrade;
    int smScienceGrade;
    int smHistoryGrade;
    int smMusicGrade; 
    
    int bkMathGrade;
    int bkEnglishGrade;
    int bkScienceGrade;
    int bkHistoryGrade;
    int bkMusicGrade; 

    int pjMathGrade;
    int pjEnglishGrade;
    int pjScienceGrade;
    int pjHistoryGrade;
    int pjMusicGrade; 

    int jsMathGrade;
    int jsEnglishGrade;
    int jsScienceGrade;
    int jsHistoryGrade;
    int jsMusicGrade;

    int jSulMathGrade;
    int jSulEnglishGrade;
    int jSulScienceGrade;
    int jSulHistoryGrade;
    int jSulMusicGrade; 
     
    
    
    
    while (!user_selected_robertGlasper || !user_selected_shaunMartin || !user_selected_beyonceKnowles || !user_selected_pjMorton || !user_selected_jillScott || !user_selected_jasmineSullivan) {
    
       
       if(user_selected_robertGlasper) {

         cout << "1. Robert Glasper [Selected}"<< endl;
          //cout<< "2. Shaun Martin"<<endl;
          //cout <<"3. Beyonce Knowles"<< endl;
          //cout<< "4. PJ Morton" << endl;
          //cout << "5.Jill Scott" << endl;
          //cout<< "6. Jazmine Sullivan" <<endl;
          //cout <<"-----------------------" << endl << endl;
          
       }

       if(!user_selected_robertGlasper){
        cout << "1. Robert Glasper"<<endl;

       }



       //else{
        //cout<< "1. Robert Glasper"<< endl;
        //cout << "2. Shaun Martin"<< endl;
        //cout << "3. Beyonce Know"
       //}

        if (user_selected_shaunMartin){
         // cout<< "1.Robert Glasper" << endl;
          cout << "2. Shaun Martin [Selected]" << endl;
          //cout << "3.Beyonce Knowles" << endl;
          //cout << "4. PJ Morton" << endl;
          //cout << "5.Jill Scott" <<endl;
          //cout << "6. Jazmine Sullivan" << endl;
       }

       if (!user_selected_shaunMartin){
        cout << "2. Shaun Martin"<< endl;
       }



        //else if(user_selected_shaunMartin && (student ==2))
          //cout << "1. Robert Glasper [Selected]" <<endl;
          //cout << "2. Shaun MA"

        if(user_selected_beyonceKnowles){
          cout<< "3. Beyonce Knowles [Selected]"<< endl;
       }

       if(!user_selected_beyonceKnowles){
        cout << "3. Beyonce Knowles"<<endl;
       }


        if(user_selected_pjMorton){
         cout << "4. PJ Morton [Selected]"<< endl;
        }

        if(!user_selected_pjMorton){
          cout<<"4. PJ Morton" << endl;
        }

        if (user_selected_jillScott){
          cout << "5.Jill Scott [Selected]"<< endl;
       }

       if(!user_selected_jillScott){
        cout<< "5. Jill Scott"<< endl;
       }


        if (user_selected_jasmineSullivan){
          cout << "6. Jasmine Sullivan [Selected]"<< endl;
        }

        if(!user_selected_jasmineSullivan){
          cout << "6. Jasmine Sullivan"<< endl;
        }
        
        //else if(!user_selected_robertGlasper||!user_selected_shaunMartin||!user_selected_beyonceKnowles||!user_selected_pjMorton||!user_selected_jillScott||!user_selected_jasmineSullivan){
        //cout << "1. Robert Glasper" << endl;
        //lse if (user_selected_robertGlasper){
          //cout<< "1. Robert Glasper [Selected]"<< endl;
       //}


        //cout << "2. Shaun Martin" << endl;
        //cout << "3. Beyonce Knowles" << endl;
        //cout << "4. PJ Morton" << endl;
        //cout << "5. Jill Scott" << endl;
        //cout << "6. Jazmine Sullivan" << endl;
        //cout << "-------------------" << endl << endl;
        //}
      

        
    

        //else if(!user_selected_shaunMartin){
          //cout<< "1. Robert Glasper" << endl;
          //cout << "2. Shaun Martin" << endl;
          //cout << "3. Beyonce Knowles" << endl;
          //cout << "4. PJ Morton"<< endl;
          //cout << "5. Jill Scott"<< endl;
          //cout << "6. Jazmine Sullivan" <<endl;
        //}
    
    
    
      cout << "Please select a name by entering the corresponding number: ";
      cin >> student;

      //cout<< "look here"<< student<< endl;

        if (user_selected_robertGlasper && (student ==1)){
                 cout << "Please select another student. " << endl;
          continue;
        }


        if (user_selected_shaunMartin && (student == 2)){
          cout << "Please select another student. "<< endl;
        
        continue;
        }

        if (user_selected_beyonceKnowles && (student ==3)){
          cout<< "Please select another student. "<< endl;
          continue;
        }


        if (user_selected_pjMorton && (student ==4)){
          cout << "Please select another student. "<< endl;
          continue;
        }

        if (user_selected_jillScott && (student ==5)){
          cout << "Please select another student. "<< endl;
          continue;
        }

        if (user_selected_jasmineSullivan && (student==6)){
          cout << "Please select another student. "<< endl;
          continue;
        }
      //}// selected if end


      user_selected_robertGlasper = student == 1 || user_selected_robertGlasper;

      cout << user_selected_robertGlasper << endl;

      user_selected_shaunMartin = student == 2 || user_selected_shaunMartin;

      cout << user_selected_shaunMartin << endl;

      user_selected_beyonceKnowles = student == 3 || user_selected_beyonceKnowles;
      user_selected_pjMorton = student == 4 || user_selected_pjMorton;
      user_selected_jillScott = student == 5 || user_selected_jillScott;
      user_selected_jasmineSullivan = student == 6 || user_selected_jasmineSullivan;
    
      if (student < robertGlasper || student > 6) {
          cout << "You chose an invalid number" << endl;
          continue;
        }// choose valid number for student
      
        
      
        // cout<< student<< endl;
      

      // switch (student){
      //   case robertGlasper:
        
      //   break;
      //   case shaunMartin:
        
      //   break;
      //   case beyonceKnowles:
        
      //   break;
      //   case pjMorton:
        
      //   break;
      //   case jillScott:
        
      //   break;
      //   case jasmineSullivan:
    
      //   break;

      //   default:
      //   cout<< "You chose an invalid number. testing " << endl;
      //   continue;
  
      // }


        // choose valid number for student
    
      char math = 'a', science = 'b', english = 'c', history = 'd', music = 'e';
      char subject;
    
      bool user_selected_math = false; // false
      bool user_selected_english = false;
      bool user_selected_science = false; //false
      bool user_selected_history = false;
      bool user_selected_music = false;

      int grade;
    
      while (!user_selected_math || !user_selected_english || !user_selected_science || !user_selected_history || !user_selected_music) {
        //int grade;

        if (!user_selected_math){
          cout<< "A. Math"<<endl;

        }

        if (user_selected_math){

            if(student == 1){
              cout<< "A. Math ["<<rgMathGrade<< "]" << endl;
            }

            if(student == 2){
              cout <<"A. Math ["<< smMathGrade<<"]"<<endl;
            }
          
            if(student == 3){
              cout << "A. Math["<< bkMathGrade<< "]"<< endl;
            }
              if(student == 4){
              cout << "A. Math["<< pjMathGrade<< "]"<< endl;
            }
              if(student == 5){
              cout << "A. Math["<< jsMathGrade<< "]"<< endl;
            }
              if(student == 6){
              cout << "A. Math["<< jSulMathGrade<< "]"<< endl;
            }
        }

        //if (!user_selected_math){
          //cout<< "A. Math"<<endl;

        //}

        if(!user_selected_science){
          cout<< "B. Science" << endl;
        }

        if (user_selected_science){
          if(student ==1){
          cout << "B. Science ["<<rgScienceGrade<< "]"<< endl;
        }
        if(student ==2){
          cout << "B. Science ["<<smScienceGrade<< "]"<< endl;
        }

        if(student ==3){
          cout << "B. Science ["<<bkScienceGrade<< "]"<< endl;
        }
        if(student ==4){
          cout << "B. Science ["<<pjScienceGrade<< "]"<< endl;
        }
        if(student ==5){
          cout << "B. Science ["<<jsScienceGrade<< "]"<< endl;
        }
        if(student ==6){
          cout << "B. Science ["<<jSulScienceGrade<< "]"<< endl;
        }




      }
        if(!user_selected_english){
          cout<< "C. English"<<endl;
        }

        if(user_selected_english){

          if (student ==1){
          cout<< "C. English ["<<rgEnglishGrade<< "]"<< endl;
        }

           if (student ==2){
          cout<< "C. English ["<<smEnglishGrade<< "]"<< endl;
        }

           if (student ==3){
          cout<< "C. English ["<<bkEnglishGrade<< "]"<< endl;
        }

           if (student ==4){
          cout<< "C. English ["<<pjEnglishGrade<< "]"<< endl;
        }

           if (student ==5){
          cout<< "C. English ["<<jsEnglishGrade<< "]"<< endl;
        }

           if (student ==6){
          cout<< "C. English ["<<jSulEnglishGrade<< "]"<< endl;
        }

      }




    
        if(!user_selected_history){
          cout<< "D. History "<< endl;
        }

        if(user_selected_history){

          if(student==1){
            cout<< "D. History ["<< rgHistoryGrade << "]"<< endl;
          }
          if(student==2){
            cout<< "D. History ["<< smHistoryGrade << "]"<< endl;
          }
          if(student==3){
            cout<< "D. History ["<< bkHistoryGrade << "]"<< endl;
          }

          if(student==4){
            cout<< "D. History ["<< pjHistoryGrade << "]"<< endl;
          }

          if(student==5){
            cout<< "D. History ["<< jsHistoryGrade << "]"<< endl;
          }
          if(student==6){
            cout<< "D. History ["<< jSulHistoryGrade << "]"<< endl;
          }
        }




        if(!user_selected_music){
          cout << "E. Music"<< endl;
        }

        if(user_selected_music){
          if (student ==1){
            cout<< "E. Music [" << rgMusicGrade<< "]"<< endl;
          }
          if (student ==2){
            cout<< "E. Music [" << smMusicGrade<< "]"<< endl;
          }
          if (student ==3){
            cout<< "E. Music [" << bkMusicGrade<< "]"<< endl;
          }
          if (student ==4){
            cout<< "E. Music [" << pjMusicGrade<< "]"<< endl;
          }
          if (student ==5){
            cout<< "E. Music [" << jsMusicGrade<< "]"<< endl;
          }
          if (student ==6){
            cout<< "E. Music [" << jSulMusicGrade<< "]"<< endl;
          }


        }

        //else if(!user_selected_math || !user_selected_english || !user_selected_science || !user_selected_history || !user_selected_music){
        
        //if (!user_selected_math){
          //cout << "A. Math" << endl;
        //}
        //else if (user_selected_math){
         // cout<< "A. Math [Selected]"<< endl;
       // }

       // if(!user_selected_science){
        //cout << "B. Science" << endl;
      //}

       //if(!user_selected_english){
        //cout << "C. English" << endl;
     // }

       // if (!user_selected_history){
        //cout << "D. History" << endl;
     // }

        //if (!user_selected_science){
        //cout << "E. Music" << endl;
     // }


        cout << "------------" << endl;
    
        cout << "Please select a class by entering the corresponding letter: ";
        cin >> subject; // user enters 'f'

        //user enters a the first time 
        if (user_selected_math && (subject == 'a'|| subject == 'A')){
        //continue;
      //}
    
      //if (subject < 'A' || subject > 'E' && subject < 'a' || subject > 'e') {
         cout << "You have entered an invalid option" << endl;
          continue;
        }    

        if (user_selected_science && (subject == 'b' || subject == 'B')){


        cout << "You have entered an invalid option"<< endl;
          continue;
        }


        if (user_selected_english && (subject == 'c'|| subject=='B')){

          cout<< "You have entered an invalid option " << endl;
          continue;
        }

        if (user_selected_history && (subject == 'd' || subject == 'D')){

          cout<< "You have entered an invalid option " << endl;
          continue; 
        }

        if (user_selected_music && (subject == 'e' || subject == 'D')){
          cout << "You hace entered an invalid option " << endl;
          continue;
        }



        user_selected_math = /* <--- */ subject == 'a' || subject == 'A' || user_selected_math;
        
      
        user_selected_science = subject == 'b' || subject == 'B' || user_selected_science;
        
        user_selected_english = subject == 'c' || subject == 'C' || user_selected_english;
        user_selected_history = subject == 'd' || subject == 'D' || user_selected_history;
        user_selected_music = subject == 'e' || subject == 'E' || user_selected_music;
     
      //if (user_selected_math && (subject == 'a'|| subject == 'A')){
        //continue;
      //}
    
      //if (subject < 'A' || subject > 'E' && subject < 'a' || subject > 'e') {
         //cout << "You have entered an invalid option" << endl;
          //continue;
        //}

        

        //}// while loop
    
       // int grade ;
    
        cout << "Please select students grade percentage for the selected class: ";
        cin >> grade;
    
        if (grade < 80 && grade > 69) {
          cout << "This student has a C" << endl;
        }
    

        else if (grade < 90 && grade > 79) {
          cout << "This student has a B" << endl;
        }
    
        else if (grade <= 100 && grade > 89) {
          cout << "This student has an A" << endl;
        }
        else {
          cout << "This student has failed. Please seek tutoring." << endl;
        }// grade if statement end
    
        //cout << "Please choose the next class for the same student: ";
        cout<< "Student"<< student<< endl;

    
  
        if (student ==1) {
          switch (subject){
          case 'a':
          case 'A':
          rgMathGrade= grade;
          break;

            cout <<grade<<endl;


          case 'b':
          case 'B':
          rgScienceGrade= grade;
          break;

            cout<< grade<< endl;

          case 'c':
          case 'C':
          rgEnglishGrade= grade;
          break;

          cout << grade << endl;

          case 'd':
          case 'D':
          rgHistoryGrade=grade;
          break;

          case 'e':
          case 'E':
          rgMusicGrade=grade;
          break;




          default: 
          cout<< "You've entered an invalid grade. " << endl;
          break;


        }// if student end
      }//switch end
      


        if (student ==2) {
        switch (subject){

          case 'a':
          case 'A':
          smMathGrade= grade;
          break;

          case 'b':
          case 'B':
          smScienceGrade= grade;
          break;

          case 'c':
          case 'C':
          smEnglishGrade= grade;
          break;

          case 'd':
          case 'D':
          smHistoryGrade=grade;
          break;

          case 'e':
          case 'E':
          smMusicGrade=grade;
          break;




          default:
          cout<< "You've entered an invalid grade. " << endl;
          break;

        }
      }

      


        if (student ==3) {
          switch (subject){
          case 'a':
          case 'A':
          bkMathGrade= grade;
          break;

          case 'b':
          case 'B':
          bkScienceGrade= grade;
          break;

          case 'c':
          case 'C':
          bkEnglishGrade= grade;
          break;

          case 'd':
          case 'D':
          bkHistoryGrade=grade;
          break;

          case 'e':
          case 'E':
          bkMusicGrade=grade;
          break;




          default:
          cout<< "You've entered an invalid grade. " << endl;
          break;

        }
      }
      


        if (student ==4) {
          switch (subject){
          case 'a':
          case 'A':
          pjMathGrade= grade;
          break;

          case 'b':
          case 'B':
          pjScienceGrade= grade;
          break;

          case 'c':
          case 'C':
          pjEnglishGrade= grade;
          break;

          case 'd':
          case 'D':
          pjHistoryGrade=grade;
          break;

          case 'e':
          case 'E':
          pjMusicGrade=grade;
          break;




          default:
          cout<< "You've entered an invalid grade. " << endl;
          break;

        }
      }
      


        if (student ==5) {
        switch (subject){
          case 'a':
          case 'A':
          jsMathGrade= grade;
          break;

          case 'b':
          case 'B':
          jsScienceGrade= grade;
          break;

          case 'c':
          case 'C':
          jsEnglishGrade= grade;
          break;

          case 'd':
          case 'D':
          jsHistoryGrade=grade;
          break;

          case 'e':
          case 'E':
          jsMusicGrade=grade;
          break;




          default:
          cout<< "You've entered an invalid grade. " << endl;
          break;

        }
      }


        if (student ==6) {
          switch (subject){
          case 'a':
          case 'A':
          jSulMathGrade= grade;
          break;

          case 'b':
          case 'B':
          jSulScienceGrade= grade;
          break;

          case 'c':
          case 'C':
          jSulEnglishGrade= grade;
          break;

          case 'd':
          case 'D':
          jSulHistoryGrade=grade;
          break;

          case 'e':
          case 'E':
          jSulMusicGrade=grade;
          break;




          default:
          cout<< "You've entered an invalid grade. " << endl;
          break;

        }//if student end
      }//switch end
      
      
      
      



    }  // end of class grade while loop

        
    
      } // student selection while loop

//} //end program


    
    

    
      cout<< "Robert Glasper has a " << rgMathGrade<< "in math." << endl;
      cout<< "Robert Glasper has a " << rgScienceGrade<< "in science." << endl;
      cout<< "Robert Glasper has a " << rgEnglishGrade << " in english. "  << endl;
      cout<< "Robert Glasper has a " << rgHistoryGrade << " in history. "  << endl;
      cout<< "Robert Glasper has a " << rgMusicGrade << " in music."  << endl;
      cout<< "Shaun Martin has a " << smMathGrade << "in math. "<< endl;
      cout<< "Shaun Martin has a " << smScienceGrade << "in science."  << endl;
      cout<< "Shaun Martin has a " << smMathGrade << "in english" << endl;
      cout<< "Shaun Martin has a " << smHistoryGrade << "in history. " << endl;
      cout<< "Shaun Martin has a " << smMusicGrade << "in music." << endl;
      cout<< "Beyonce Knowles has a " << bkMathGrade << "in math" << endl;
      cout<< "Beyonce Knowles has a " << bkScienceGrade << "in science" << endl;
      cout<< "Beyonce Knowles has a " << bkEnglishGrade << "in english. "  << endl;
      cout<< "Beyonce Knowles has a " << bkHistoryGrade << "in history." << endl;
      cout<< "Beyonce Knowles has a " << bkMusicGrade << "in music. " << endl;
      cout<< "PJ Morton has a " << pjMathGrade << "in math. " << endl;
      cout<< "PJ Morton has a " << pjScienceGrade << "in science. " << endl;
      cout<< "PJ Morton has a " << pjEnglishGrade << "in english. " << endl;
      cout<< "PJ Morton has a " << pjHistoryGrade << "in history. "  << endl;
      cout<< "PJ Morton has a " << pjMusicGrade << "in music. " << endl;
      cout<< "Jill Scott has a " << jsMathGrade << "in math. " << endl;
      cout<< "Jill Scott has a " << jsScienceGrade << "in science. " << endl;
      cout<< "Jill Scott has a" << jsEnglishGrade << "in english. " << endl;
      cout<< "Jill Scott has a" << jsHistoryGrade << "in history.  " << endl;
      cout<< "Jill Scott has a" << jsMusicGrade << "in music. " << endl;
      cout<< "Jasmine Sullivan" << jSulMathGrade << "in math." << endl;
      cout<< "Jasmine Sullivan" << jSulScienceGrade << "in science. "  << endl;
      cout<< "Jasmine Sullivan has a " << jSulEnglishGrade << "in english. "  << endl;
      cout<< "Jasmine Sullivan has a " << jSulHistoryGrade << "in history. " << endl;
      cout<< "Jasmine Sullivan has a " << jSulMusicGrade << "in music. "  << endl;

    }// end program
    // /*
    // Comparison operators
    
    // < less than 
    // > greater than
    // <= less than or equal to
    // >= greater than or equal to
    
    // == equal to
    // != not equal to
    // */
    
    // /* 
    // Boolean operators
    
    // && and
    // || or
    // ! not
    
    // */


 // full program
