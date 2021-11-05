class RollDice {
	RollDice() {
		Random rand = new Random();
		int num = 0;
		roll();
	}
	void roll() {
		num = rand.nextInt(6) + 1;
		System.out.println(num);
	}
}