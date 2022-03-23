# include   <iostream> 
  
  int   main (){ 
       int  A =  0 , B =  0 , C =  0  ,D =  0 , F =  0 , score; 
  
       for  ( int  i =  0 ;; i++) { 
          std::cout <<  " Enter Exam Scores:  " ; 
          std::cin >> score; 
           if  (score <  0 ) { 
                   break ; 
          }    else   if  (score >=  0  && score <=  59 ) { 
                  F +=  1 ; 
          }    else   if  (score >=  60  && score <=  69 ) { 
                  D +=  1 ; 
          }    else   if  (score >=  70  && score <=  79 ) { 
                  C +=  1 ; 
          }    else   if  (score >=  80  && score <=  89 ) { 
                  B +=  1 ; 
          }    else   if  (score >=  90  && score <=  100 ) { 
                  A +=  1 ; 
          }    else   if  (score >  100   or  !score) { 
                  std::cout <<  " Invalid input, Please try again "  << std::endl; 
          }  
      } 
  
      std::cout <<  " Number of A's: "  << A << std::endl; 
      std::cout <<  " Number of B's: "  << B << std::endl; 
      std::cout <<  " Number of C's: "  << C << std::endl; 
      std::cout <<  " Number of D's: "  << D << std::endl;  
      std::cout <<  " Number of F's: "  << F << std::endl;  
       
       return   0 ; 
  }