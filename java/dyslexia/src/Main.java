import java.util.*;

abstract class Morph {
    protected String original;

    public Morph(String input) {
        this.original = input;
    }

    abstract String transform();

    public void printResult() {
        System.out.println("Original: " + original);
        System.out.println("Morphed:  " + transform());
    }
}

enum Mood {
    CHAOTIC {
        @Override
        String apply(String input) {
            List<Character> chars = new ArrayList<>();
            for (char c : input.toCharArray()) chars.add(c);
            Collections.shuffle(chars);
            StringBuilder sb = new StringBuilder();
            chars.forEach(sb::append);
            return sb.toString();
        }
    },
    MELANCHOLIC {
        @Override
        String apply(String input) {
            return new StringBuilder(input).reverse().toString().toLowerCase();
        }
    },
    ECCENTRIC {
        @Override
        String apply(String input) {
            return input.toUpperCase().replace("E", "3").replace("A", "@");
        }
    };

    abstract String apply(String input);
}

class DyslexiaMorph extends Morph {
    private Mood mood;

    public DyslexiaMorph(String input, Mood mood) {
        super(input);
        this.mood = mood;
    }

    @Override
    String transform() {
        return mood.apply(original);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a sentence to morph:");
        String sentence = scanner.nextLine();

        Mood mood = getRandomMood();

        DyslexiaMorph morph = new DyslexiaMorph(sentence, mood);
        System.out.println("Using mood: " + mood);
        morph.printResult();
    }

    static Mood getRandomMood() {
        Mood[] moods = Mood.values();
        return moods[new Random().nextInt(moods.length)];
    }
}
