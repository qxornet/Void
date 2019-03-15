//!!!БЛОК КОММЕНТАРИЕВ: РУССКИЙ
//ДАННАЯ БИБЛИОТЕКА РЕАЛИЗУЕТ ШИФРОВАНИЕ ЛЮБЫХ ВВЕДЕННЫХ ДАННЫХ РАЗНОГО ФОРМАТА
//РЕАЛИЗАЦИЯ КЛАССОВ И МЕТОДОВ СКРЫТА В ФАЙЛЕ CIPHERVOIDDB.CPP 
//РАЗРАБОТЧИК: ILYA WARLORD
//E-MAIL: ARHANGEL1998I@MAIL.RU
//ИЗМЕНЯТЬ ДАННЫЕ СТРОГО ЗАПРЕЩЕНО!!!

//RSA MARCOSES
/*#define "a" 2
#define "b" 3 
#define "c" 4 
#define "d" 5
#define "e" 6 
#define "f" 7
#define "g" 8
#define "h" 9
#define "i" 10
#define "j" 11 
#define "k" 12
#define "l" 13 
#define "m" 14
#define "n" 15
#define "o" 16
#define "p" 17
#define "q" 18
#define "r" 19
#define "s" 20
#define "t" 21
#define "u" 22
#define "v" 23
#define "w" 24
#define "x" 25
#define "y" 26
#define "z" 27 */

//НАПИСАТЬ ПОТОК ВЫВОДЯ ДЛЯ РЕЗУЛТИРУЮЩИХ МАССИВОВ 

// ----------------------------------------------------------------
//--------------------INCLUDED STANDART LIBRARY--------------------
#include <iostream>
#include <string.h>

namespace CipherMethod {

	enum RSAEnumWordsEN { 
		NULL = 1,

		a = 2,
		b = 3, 
		c = 4, 
		d = 5,
		e = 6, 
		f = 7,
		g = 8,
		h = 9,
		i = 10,
		j = 11, 
		k = 12,
		l = 13, 
		m = 14,
		n = 15,
		o = 16,
		p = 17,
		q = 18,
		r = 19,
		s = 20,
		t = 21,
		u = 22,
		v = 23,
		w = 24,
		x = 25,
		y = 26,
		z = 27,
	}

	enum RSAEnumWordsRU {
		NULL = 1,

		rusA = 2,
		rusB = 3,
		rusW = 4,
		rusG = 5,
		rusD = 6,
		rusE = 7,
		rusE2 = 8,
		rusJ = 9,
		rusZ = 10,
		rusI = 11,
		rusI2 = 12,
		rusK = 13, 
		rusL = 14,
		rusM = 15,
		rusN = 16,
		rusO = 17,
		rusP = 18,
		rusS = 19, 
		rusT = 20,
		rusY = 21,
		rusF = 22,
		rusH = 23,
		rusC = 24,
		rusCH = 25,
		rusSH = 26,
		rusSCH = 27,
		rusHS = 28,
		rusHI = 29,
		rusSS = 30,
		rusUH = 31,
		rusYU = 32,
		rusYA = 33,
	}


////--------------------MAIN CLASS--------------------
class Cipher { private: int privateField; public: int publicField; protected: int protectedField; };

///--------------------LINK CLASSES
class Symmetric : public Cipher {}; 

	class BlockSymmetric : protected Symmetric {}; 
	class ThreadSymmetric : protected Symmetric {}; 

class Asymmetric : public Cipher {};
class Hash : public Cipher {};

///------------------ANNOUNCEMENT AND ARCHITECTURE: ATTENTION!!!

//-------------------BASIC CIPHER CLASSES

class CipherMethodSubstitution : Cipher {};

//------------------ASYMMETCRIC CIPHER CLASSES 

//DIGNITIES
//1) No need to pre-Perv secret key over reliable channel
//2) Only one side is known the Diane key to be kept in allocate
//3) In large networks, the number of keys in asymmetric criticism is significantly less than in symmetric

//DISADVANTAGES
//1) Make changes to the algorithm harder
//2) Longer keys 
//3) Shares-decoding using a pair of keys takes place on two or three orders of man than share-English of the same text symmetric algorithm
//4) Will require significantly more resources

class CipherMethodRSA : Asymmetric {

public: int NULL = 0; int statSize =  32; int p, q, fN; 
private: std::string resultate;
protected: std::string Proposal[]; std::string propProposal[]; std::string copy[]; std::string outProposal[]; 

public:	CipherMethodRSA() {
		   std::string createDefault[] = gcnew std::string;
		   for (int i = 0; i < statSize; i++) {
				*(createDefault+i) = 0;
			} //инициализация умолчательного массива
		} 

	   ~CipherMethodRSA() {
		   delete[] createDefault;
		}

///!!!ТЕКСТ КОММЕНТАРИЕВ ДАННОГО БЛОКА РУССКИЙ!!!

private: void getInput (std::string text) const {
			 
			 for (int i = 0; i < text.length; i++) {
			 *(Proposal+i) = *(text+i);
			 }	//ввод данных в скопированный массив

		 } //Ввод текста для последующего процессинга

private: geEulerFunction (int _pcopy, int _qcopy) const {
			
			 _pcopy = p;
			 _qcopy = q;

			 int outNEu;

			 outF_n = (_pcopy - 1) * (_qcopy - 1);

			 fN = outF_n;

		 } //Функция Эйлера

private: void Processing (int p_value, int q_value) const {
			 
			 int p_proc = p_value;
			 p = p_proc;
			 int q_proc = q_value;
			 q = q_proc;
			 int n_modula;

			 n_modula = p_proc * q_proc;



		 }//Обработка или шифровка сообщения

private: int getOutput (int a_position) const {

				for (int i = 0; i<Proposal->length; i++) {
					outProposal [i] = Proposal [i];
				}

				return outP	roposal [a_position];

		 } //Вывод

private: void Decipherment (int o_key) const; //Единственный параметр - открытый ключ для дешифровки сообщения

private: void getAddition (int o_key, int position, std::string textLine) const; //Первым параметром идет открытый ключ для дешифровки сообщение, вторым позиция, с которой следует начать добавление, третьим сообщение

private: void getTransform (int o_key, int s_pos, int e_pos, std::string textTrans) const; //Первым параметром идет открытый ключ для дешифровки сообщения, дальше начальная и конечная позиция замены, четвертым сообщение

};

//------------------------------------------

class CiptherMethodDiffHell : Asymmetric {};

class CipherMethodDSA : Asymmetric {};

class CipherMethodElgamal : Asymmetric {};

class CipherMethodECDSA : Asymmetric {};

class CipherMethodRabin : Asymmetric {};

class CipherMethodLuc : Asymmetric {};

class CipherMethodMcEliece : Asymmetric {};

//------------------SYMMETCRIC CIPHER CLASSES 

//DIGNITIES
//1) Speed
//2) Ease of implementation 
//3) Smaller key length required for comparable durability
//4) Knowledge 

//DISADVANTAGES
//1) Complexity of key management in a large network
//2) Complexity of key exchange. To use it, it is necessary to solve the problem of reliable key transfer to each subscriber,
//	 since a secret channel is needed to transfer each key to both parties.

//----------SYMMETCRIC CIPHER CLASSES : BLOCK TYPEц

class CipherMethodDES : BlockSymmetric {};

class CipherMethod3DES : BlockSymmetric {};

class CipherMethodAES : BlockSymmetric {};

class CipherMethodIDEA : BlockSymmetric {};

class CipherMethodNUSH : BlockSymmetric {};

class CipherMethodCAST : BlockSymmetric {};

class CipherMethodCRAB : BlockSymmetric {}; //---------------!!!POSSIBLE!!!

class CipherMethod3WAY : BlockSymmetric {};

class CipherMethodRC2 : BlockSymmetric {};

class CipherMethodRC5 : BlockSymmetric {};

class CipherMethodGOST2814789 : BlockSymmetric {};

class CipherMethodBlowfish : BlockSymmetric {};

class CipherMethodTwofish : BlockSymmetric {};

class CipherMethodKnufu : BlockSymmetric {};

class CipherMethodKnafre : BlockSymmetric {};

class CipherMethodKuznechik : BlockSymmetric {};


//----------SYMMETCRIC CIPHER CLASSES : THREAD TYPE

class CipherMethodRC4 : ThreadSymmetric {};

class CipherMethodSEAL : ThreadSymmetric {};

class CipherMethodWAKE : ThreadSymmetric {};

//--------------------HASH-FUNCTIONS CIPHER CLASSES

class CipherMethodMD5 : Hash {};

class CiptherMethodSHA : Hash {};

class CiptherMethodRIPEMD : Hash {};

class CiptherMethodTIGER : Hash {};

class CiptherMethodPANAMA : Hash {};

///--------------------FILEWORK

class FILE { protected: std::string f_name; int f_size; const char f_format; std::string f_path;};

class FILELOADDATA : FILE {};

class FILEPROCESSING : FILE {};

class FILEOUTDATA : FILE {};

class fileprocerror {};


///--------------------FRIEND FUNCTIONS

///--------------------ADDITION FUNCTIONS

///--------------------PROCESSING ERROR
} 