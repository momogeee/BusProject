#include "Buss.h"
Buss::Buss(int makat_kav, int kav, int kevon,int halufa, int shilut, int sedrei_tahana, int mkat_tahana, int tahanat_horada_reshona, int merhak_mtahana_kodemet, int merhak_mthanat_motza, float zman_nseaa_mthanat_motza, int koma, int rtseef, Cord cord, int city_code, int house_num, int code_ezor, int code_shitoof) {
	
	this->makat_kav=makat_kav;//5
	this->kav=kav;//6
	this->kevon=kevon;//7
	this->halufa=halufa;//8
	this->shilut=shilut;//9
	this->sedrei_tahana=sedrei_tahana;//10
	this->mkat_tahana=mkat_tahana;//11
	this->tahanat_horada_reshona=tahanat_horada_reshona;//14
	this->merhak_mtahana_kodemet=merhak_mtahana_kodemet;//15
	this->merhak_mthanat_motza=merhak_mthanat_motza;//16
	this->zman_nseaa_mthanat_motza=zman_nseaa_mthanat_motza;//17
	this->koma=koma;//18
	if (this->koma < 0)
		this->koma = -1;
	this->rtseef=rtseef;//19
	if (this->rtseef < 0)
		this->rtseef = -1;
	this->cord=cord;//21,20
	this->city_code=city_code;//22
	this->house_num=house_num;//25
	this->code_ezor=code_ezor;//27
	this->code_shitoof=code_shitoof;//29
}
void Buss::print() {
	std::cout << this->makat_kav <<"=="<<
		this->kav << "==" <<
		this->kevon << "==" <<
		this->halufa << "==" <<
		this->shilut << "==" <<
		this->sedrei_tahana << "==" <<
		this->mkat_tahana << "==" <<
		this->tahanat_horada_reshona << "==" <<
		this->merhak_mtahana_kodemet << "==" <<
		this->merhak_mthanat_motza << "==" <<
		this->zman_nseaa_mthanat_motza << "==" <<
		this->koma << "==" <<
		this->rtseef<<"==";
	this->cord.print();
	std::cout<<this->city_code << "==" <<
		this->house_num << "==" <<
		this->code_ezor << "==" <<
		this->code_shitoof;
}