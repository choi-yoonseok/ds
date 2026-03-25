import java.util.*;

public class RockPaperScissor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] options = {"rock", "paper", "scissor"};
        Random rand = new Random();
        String computerChoice = options[rand.nextInt(options.length)];

        System.out.print("Enter your choice (rock, paper, scissor): ");
        String userChoice = sc.nextLine().toLowerCase();

        System.out.println("Computer chose: " + computerChoice);

        if (userChoice.equals(computerChoice)) {
            System.out.println("It's a tie!");
        } else if ((userChoice.equals("rock") && computerChoice.equals("scissor")) ||
                   (userChoice.equals("paper") && computerChoice.equals("rock")) ||
                   (userChoice.equals("scissor") && computerChoice.equals("paper"))) {
            System.out.println("You win!");
        } else {
            System.out.println("Computer wins!");
        }

        sc.close();
    }
}