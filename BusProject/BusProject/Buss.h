#pragma once
#include "Cord.h"
class Buss
{
	int makat_kav;//5
	int kav;//6
	int kevon;//7
	int halufa;//8
	int shilut;//9
	int sedrei_tahana;//10
	int mkat_tahana;//11
	int tahanat_horada_reshona;//14
	int merhak_mtahana_kodemet;//15
	int merhak_mthanat_motza;//16
	float zman_nseaa_mthanat_motza;//17
	int koma;//18
	int rtseef;//19
	Cord cord;//21,20
	int city_code;//22
	int house_num;//25
	int code_ezor;//27
	int code_shitoof;//29
public:
	Buss(int makat_kav, int kav, int kevon,int halufa, int shilut, int sedrei_tahana, int mkat_tahana, int tahanat_horada_reshona, int merhak_mtahana_kodemet, int merhak_mthanat_motza, float zman_nseaa_mthanat_motza, int koma, int rtseef, Cord cord, int city_code, int house_num, int code_ezor, int code_shitoof);
	void print();
};


