#include <iostream>
#include <string.h>

namespace VoidDB {
	//fileds of visibility
	class Math { private: std::string privateData;  protected: std::string protectedData;}; 
	class Grahp : Math  { 

		
	};

	class BasicMath : public Math {
		template <typename T> T oneBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
		template <typename T> T twoBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
		template <typename T> T threeBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
		template <typename T> T fourBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
		template <typename T> T fiveBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
		template <typename T> T sixBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
		template <typename T> T sevenBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
		template <typename T> T eightBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
		template <typename T> T ageBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
		template <typename T> T teenBacisMathFunction (T & oneTemporaryValue, T & twoTemporaryValue);
			
		//CONST_METHOD_BLOCK_OF_BASIC_MATH_CLASS
		template <typename T> T oneBacisMathConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
		template <typename T> T twoBacisMathConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
		template <typename T> T threeBacisMathConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
	};

	class HightMath : public Math {
		template <typename T> T oneHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T twoHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T threeHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T fourHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T fiveHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T sixHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T sevenHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T eightHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T ageHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T teenHightMathFunction (T oneTemporaryValue, T twoTemporaryValue);

		//CONST_METHOD_BLOCK_OF_HIGHT_MATH_CLASS
		template <typename T> T oneHightMathConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
		template <typename T> T twoHightMathConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
		template <typename T> T threeHightMathConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
	};

	class MathOfMethod : public Math {
		template <typename T> T oneMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T twoMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T threeMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T fourMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T fiveMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T sixMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T sevenMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T eightMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T ageMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T teenMathOfMethodFunction (T oneTemporaryValue, T twoTemporaryValue);

		//CONST_METHOD_BLOCK_OF_MATH_OF_METHOD_MATH_CLASS
		template <typename T> T oneMathOfMethodConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
		template <typename T> T twoMathOfMethodConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
		template <typename T> T threeMathOfMethodConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
	};


	class Logic : public Math {
		template <typename T> T oneLogicFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T twoLogicFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T threeLogicFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T fourLogicFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T fiveLogicFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T sixLogicFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T sevenLogicFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T eightLogicFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T ageLogicFunction (T oneTemporaryValue, T twoTemporaryValue);
		template <typename T> T teenLogicFunction (T oneTemporaryValue, T twoTemporaryValue);

		//CONST_METHOD_BLOCK_OF	_BASIC_MATH_CLASS
		template <typename T> T oneLogicConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
		template <typename T> T twoLogicConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
		template <typename T> T threeLogicConstFunction (T oneTemporaryValue, T twoTemporaryValue) const;
	};


}