

class juego{
	int num1, num2, op;
	char operation[4];
	int answer;

	public:
		juego();
		int gen_number();
		int gen_operator();
	
		void show_operation();
		bool check_result();	
};
