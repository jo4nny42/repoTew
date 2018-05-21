	public class game{
		static String [] charachterName = {"Bob", "Margarett", "Katherine", "Veronica", "Chelsea", "Malcolm"};
		static int [] numbersToGuess = {11,9,8,12,7,13,7,5,8,4};
		static String guess;
		static int maxAttempts=5;
		static int number=9;
		int arrayLength = charachterName.length;
		game gameObject = new game();
		public static void intro(){
			System.out.println("This game is a guessing game where you guess a number.");
		}
				public static void numberGenerator(){
					  
				}
				public static void  main(String [] args){
					intro();
					//numberGenerator();
					System.out.println("(Pick a number between 1 && 14)");
					/*for(int i=0; i<arrayLength; i++){
						System.out.println("This character is named " + charachterName[i]);
			  }*/
			  for(int i=0; i<maxAttempts; i++){
			  	while(guess!=String.valueOf(number)){
			  		System.out.println("guess again");
				  		numGuessed();
				  	}
			  }
				  	if(i=maxGuessAttempts){
				  			System.out.println("Out of luck");
				  			System.out.println("The number was " + number);
				  	}
				  	if(guess.equals(String.valueOf(number))){
				  		System.out.println("You guessed correct.");
				  }
				 }
				}