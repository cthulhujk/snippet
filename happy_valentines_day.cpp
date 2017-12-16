/* Happy Valentine's Day
 * Built on vs2013
 * 2017.2.14
*/
#include <iostream>
#include <cassert>
template<int _letter_id>
struct CharWrapper{
	typedef void(CharWrapper::*FuncPtrType)(void);
	
	static const decltype(char(_letter_id)) cv = _letter_id;
	FuncPtrType pf;

	CharWrapper() :pf(&CharWrapper::operator()) {
		
	}
	void operator()(void){
		assert((cv >= 65 && cv <= 90)||(cv >= 97 && cv <= 122)||(cv == 44));
		std::cout << cv << " ";
	}
	void tt() {
		(CharWrapper().*pf)();
	}
};
struct Alphabet{
	template<int _letter_id>
	static Alphabet get() {
		(CharWrapper<_letter_id>().*CharWrapper<_letter_id>().pf)();
		return Alphabet();
	}
};
int main() {
	Alphabet::get<72>().get<97>().get<112>().get<112>().get<121>();
	Alphabet::get<86>().get<97>().get<108>().get<101>().get<110>().get<116>().get<105>().get<110>().get<101>().get<115>();
	Alphabet::get<68>().get<97>().get<121>();
	Alphabet::get<44>().get<66>().get<101>().get<115>().get<116>();
	Alphabet::get<87>().get<105>().get<115>().get<104>().get<101>().get<115>();
	Alphabet::get<70>().get<114>().get<111>().get<109>();
	Alphabet::get<83>().get<105>().get<110>().get<103>().get<108>().get<101>();
	Alphabet::get<68>().get<111>().get<103>();
	getchar();
	return 0;
}
