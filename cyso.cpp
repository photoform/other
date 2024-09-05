# include <iostream>
# include <cmath>
# include <string>

//TODO: File Output, Terminal Formatting, OS Differentation (or whatever it's called) 

// there's proabaly a more clever way of doing this, but whatever
inline double housing(double t) {return t * 0.25;}
inline double transport(double t) {return t * 0.05;}
inline double water(double t) {return t * 0.01;}
inline double gas(double t) {return t * 0.02;}
inline double electric(double t) {return t * 0.03;}
inline double trash (double t) {return t * 0.01;}
inline double carIns (double t) {return t * 0.01;}
inline double healthIns(double t) {return t * 0.03;}
inline double houseIns(double t) {return t * 0.02;}
inline double groceries(double t) {return t * 0.025;}
inline double tolietries(double t) {return t * 0.01;}
inline double maintenance(double t) {return t * 0.01;}
inline double internet(double t) {return t * 0.01;}
inline double cellphone(double t) {return t * 0.005;}
inline double fourZero1k(double t) {return t * 0.1;}
inline double rainyDay(double t) {return t * 0.05;}
inline double longTermSavings(double t) {return t * 0.03;}
inline double shortTermSavings(double t) {return t * 0.02;}
inline double debtPayments(double t) {return t * 0.025;}
inline double childcare(double t) {return t * 0.075;}
inline double funMoney(double t) {return t * 0.3;}

/*
# ifdef _WIN32
# include <windows.h>
void printDivider()
{
  
}
#endif

# ifdef __linux__
# include <
*/

int main(int argc,char **argv)
{
  if(argc != 2)
  {
    std::cout << "ERROR: This program requires one (and only one) argument" << std::endl;
  }
  else
  {
	double totalBudget = 0;
    try {
		totalBudget = std::stod(argv[1]);
	}
	catch (const std::invalid_argument& e) {
		std::cout << "ERROR: Invalid argument exception. Program terminated" << std::endl;
		return -1;
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "ERROR: Input out of range exception. Program terminated" << std::endl;
		return -1;
	}
    std::cout << "Could you survive on $" << totalBudget << " a month?" << std::endl;
	std::cout << std::endl;
    std::cout << "NOTE: this guide closely follows the 50/30/20 rule and assumes $" << totalBudget << " is net income" << std::endl;
	std::cout << std::endl;
    // printDivder();
    std::cout << "Housing: $" << housing(totalBudget) << std::endl;
	std::cout << "Car Note: $" << transport(totalBudget) << std::endl;
	std::cout << "Water: $" << water(totalBudget) << std::endl;
	std::cout << "Gas: $" << gas(totalBudget) << std::endl;
	std::cout << "Electric: $" << electric(totalBudget) << std::endl;
	std::cout << "Trash: $" << trash(totalBudget) << std::endl;
	std::cout << "Groceries: $" << groceries(totalBudget) << std::endl;
	std::cout << "Tolietries: $" << tolietries(totalBudget) << std::endl;
	std::cout << "Childcare: $" << childcare(totalBudget) << std::endl;
	std::cout << "Maintenance: $" << maintenance(totalBudget) << std::endl;
	std::cout << "Internet: $" << internet(totalBudget) << std::endl;
	std::cout << "Cellphone: $" << cellphone(totalBudget) << std::endl;
	std::cout << "Car Insurance: $" << carIns(totalBudget) << std::endl;
	std::cout << "Health Insurance: $" << healthIns(totalBudget) << std::endl;
	std::cout << "House Insurance: $" << houseIns(totalBudget) << std::endl;
	std::cout << "401(k): $" << fourZero1k(totalBudget) << std::endl;
	std::cout << "Emergency Fund: $" << rainyDay(totalBudget) << std::endl;
	std::cout << "Short Term Savings: $" << shortTermSavings(totalBudget) << std::endl;
	std::cout << "Long Term Savings: $" << longTermSavings(totalBudget) << std::endl;
	std::cout << "Debt Repayments: $" << debtPayments(totalBudget) << std::endl;
	std::cout << "Other: $" << funMoney(totalBudget) << std::endl;
	
	// std::cout << "A copy of this information has been saved to" << "" << std::endl;
	



     

  } 
  return 0;



  }

