import java.util.Scanner;

/* Kin Marcus S. Decio | CS-102
	Asst.Prof Michelle Decamora, MIT */
	
	public class Q5{
    public static void main(String[] args) {
		Scanner letter = new Scanner(System.in);     
	   
		System.out.println ("\nWelcome to JackNPoy Game!");
		System.out.println ("Two players must input a character (p = Paper, x = Scissor, s = Stone)");
		System.out.println (("Note: Small letters only!"));
		 
		 //User Input
		 System.out.print("Enter Player 1: ");
		 char player1 = letter.next().charAt(0);
		 
		  System.out.print("Enter Player 2: ");
		 char player2 = letter.next().charAt(0);
		 
		 // Results
		 
		 if (player1 == 'p' && player2 == 'x')
			 System.out.println ("Player 2 Wins!");
		 
		 else if (player1 == 'x' && player2 == 'p')
			  System.out.println ("Player 1 Wins!");
		  
		 else if (player1 == 'x' && player2 == 's')
			  System.out.println ("Player 2 Wins!");
		  
		 else if (player1 == 's' && player2 == 'x')
			  System.out.println ("Player 1 Wins!");
		  
		  else if (player1 == 'x' && player2 == 'x')
			  System.out.println ("Draw");
		  
		  else if (player1 == 's' && player2 == 'p')
			  System.out.println ("Player 2 Wins!");
		  
		  else if (player1 == 'p' && player2 == 's')
			  System.out.println ("Player 1 Wins!");
		  
		  else if (player1 == 's' && player2 == 's')
			  System.out.println ("Draw");
		  
		  else if (player1 == 'p' && player2 == 'p')
			  System.out.println ("Draw");
		  
		  
		  
		  else
			  System.out.println ("Input proper character.");
		  
		  
	}
} 
		 
     