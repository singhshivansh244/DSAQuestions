import java.util.*;
public class ShivanshSingh2019b131036 {
	public static void main(String[] args) {


		Food food1 = new Food("pizza");
		Food food2 = new Food("hamburger");
		Food food3 = new Food("hotdog");

		Food[] refrigirator = {food1, food2, food3};

		System.out.println(refrigirator[2].name);
		System.out.println(refrigirator[0].name);
	}
}

