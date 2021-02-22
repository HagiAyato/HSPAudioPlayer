//
//	hsp3cnv(3.5b5) generated source
//	[c:\users\******\desktop\作ったもの\その他hsp\hspsoundplayer\hspfiles\hspsoundplayer.ax]
//
#include "hsp3r.h"

#define _HSP3CNV_DATE "2021/02/21"
#define _HSP3CNV_TIME "21:52:22"
#define _HSP3CNV_MAXVAR 24
#define _HSP3CNV_MAXHPI 0
#define _HSP3CNV_VERSION 0x350
#define _HSP3CNV_BOOTOPT 0

/*-----------------------------------------------------------*/

static PVal *Var_dadmlistMdraganddropmodule;
static PVal *Var_sbMdraganddropmodule;
static PVal *Var_dadminfoMdraganddropmodule;
static PVal *Var_hdropMdraganddropmodule;
static PVal *Var_sblengMdraganddropmodule;
static PVal *Var_dadmlabelMdraganddropmodule;
static PVal *Var_tm;
static PVal *Var_pl;
static PVal *Var_alltime;
static PVal *Var_at;
static PVal *Var_nt;
static PVal *Var_pt;
static PVal *Var_vol;
static PVal *Var_spd;
static PVal *Var_lo;
static PVal *Var_ro;
static PVal *Var_nvol;
static PVal *Var_nspd;
static PVal *Var_roop;
static PVal *Var_fname;
static PVal *Var_fn;
static PVal *Var_fk;
static PVal *Var_strall;
static PVal *Var_pro;

/*-----------------------------------------------------------*/

void __HspEntry( void ) {
	// Var initalize
	Var_dadmlistMdraganddropmodule = &mem_var[0];
	Var_sbMdraganddropmodule = &mem_var[1];
	Var_dadminfoMdraganddropmodule = &mem_var[2];
	Var_hdropMdraganddropmodule = &mem_var[3];
	Var_sblengMdraganddropmodule = &mem_var[4];
	Var_dadmlabelMdraganddropmodule = &mem_var[5];
	Var_tm = &mem_var[6];
	Var_pl = &mem_var[7];
	Var_alltime = &mem_var[8];
	Var_at = &mem_var[9];
	Var_nt = &mem_var[10];
	Var_pt = &mem_var[11];
	Var_vol = &mem_var[12];
	Var_spd = &mem_var[13];
	Var_lo = &mem_var[14];
	Var_ro = &mem_var[15];
	Var_nvol = &mem_var[16];
	Var_nspd = &mem_var[17];
	Var_roop = &mem_var[18];
	Var_fname = &mem_var[19];
	Var_fn = &mem_var[20];
	Var_fk = &mem_var[21];
	Var_strall = &mem_var[22];
	Var_pro = &mem_var[23];

	// goto *L0000
	TaskSwitch(0);
	return;
	TaskSwitch(1);
}

static void L0001( void ) {
	// #deffunc dandd_setwindow int _prm9
	// if _prm9
	PushFuncPrmI(0); 
	if (HspIf()) { TaskSwitch(32); return; }
	//  /*ERROR*/	PushInt(563); 
	PushFuncEnd(); PushPrgcmd(1,0); PushLabel(2); 
	Intcmd(4,2);
	// DragAcceptFiles hwnd, 1
	PushInt(1); 
	PushFuncEnd(); PushExtvar(3,0); 
	Dllfunc(0,2);
	TaskSwitch(33);
}

static void L0032( void ) {
	// else
	// DragAcceptFiles hwnd, 0
	PushInt(0); 
	PushFuncEnd(); PushExtvar(3,0); 
	Dllfunc(0,2);
	TaskSwitch(33);
}

static void L0033( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(3);
}

static void L0003( void ) {
	// #deffunc dandd_getlist var _prm10
	// _prm10 =dadmlist@draganddropmodule
	PushVar(Var_dadmlistMdraganddropmodule,0); 
	VarSet(FuncPrmVA(0),0);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(4);
}

static void L0004( void ) {
	// #defcfunc dandd_getpath int _prm11
	// notesel dadmlist@draganddropmodule
	PushVAP(Var_dadmlistMdraganddropmodule,0); 
	Intcmd(34,1);
	// noteget sb@draganddropmodule, _prm11
	PushFuncPrmI(0); 
	PushVAP(Var_sbMdraganddropmodule,0); 
	Intcmd(41,2);
	// noteunsel 
	Intcmd(40,0);
	// return sb@draganddropmodule
	PushVAP(Var_sbMdraganddropmodule,0); 
	Prgcmd(2,1);
	return;
	TaskSwitch(5);
}

static void L0005( void ) {
	// #defcfunc dandd_getinfo int _prm12
	// return dadminfo@draganddropmodule(_prm12)
		PushFuncPrmI(0); 
	PushVAP(Var_dadminfoMdraganddropmodule,1); 
	Prgcmd(2,1);
	return;
	TaskSwitch(2);
}

static void L0002( void ) {
	// hdrop@draganddropmodule =wparam
	PushSysvar(10,0); 
	VarSet(Var_hdropMdraganddropmodule,0);
	// dadminfo@draganddropmodule (3)=ginfo(24)
	PushFuncEnd(); 	PushInt(24); 
PushExtvar(256,1); 
	PushInt(3); 
	VarSet(Var_dadminfoMdraganddropmodule,1);
	// DragQueryPoint hdrop@draganddropmodule, dadminfo@draganddropmodule(1)
		PushInt(1); 
	PushVAP(Var_dadminfoMdraganddropmodule,1); 
	PushVAP(Var_hdropMdraganddropmodule,0); 
	Dllfunc(2,2);
	// DragQueryFileA hdrop@draganddropmodule, -1, dadminfo@draganddropmodule, 0
	PushInt(0); 
	PushVAP(Var_dadminfoMdraganddropmodule,0); 
	PushInt(-1); 
	PushVAP(Var_hdropMdraganddropmodule,0); 
	Dllfunc(1,4);
	// dadminfo@draganddropmodule =stat
	PushSysvar(3,0); 
	VarSet(Var_dadminfoMdraganddropmodule,0);
	// dadmlist@draganddropmodule =""
	PushStr(""); 
	VarSet(Var_dadmlistMdraganddropmodule,0);
	// repeat
	PushVAP(Var_dadminfoMdraganddropmodule,0); 
	PushLabel(6); 
	PushLabel(34); Prgcmd(4,3); return;
	TaskSwitch(34);
}

static void L0034( void ) {
	// DragQueryFileA hdrop@draganddropmodule, cnt, sb@draganddropmodule, 0
	PushInt(0); 
	PushVAP(Var_sbMdraganddropmodule,0); 
	PushSysvar(4,0); 
	PushVAP(Var_hdropMdraganddropmodule,0); 
	Dllfunc(1,4);
	// if sbleng@draganddropmodule<=stat
	PushVar(Var_sblengMdraganddropmodule,0); PushSysvar(3,0); CalcLtEqI(); 
	if (HspIf()) { TaskSwitch(35); return; }
	// sbleng@draganddropmodule =stat+1
	PushSysvar(3,0); PushInt(1); CalcAddI(); 
	VarSet(Var_sblengMdraganddropmodule,0);
	// sdim sb@draganddropmodule, sbleng@draganddropmodule
	PushVAP(Var_sblengMdraganddropmodule,0); 
	PushVAP(Var_sbMdraganddropmodule,0); 
	Prgcmd(10,2);
	TaskSwitch(35);
}

static void L0035( void ) {
	// DragQueryFileA hdrop@draganddropmodule, cnt, sb@draganddropmodule, sbleng@draganddropmodule
	PushVAP(Var_sblengMdraganddropmodule,0); 
	PushVAP(Var_sbMdraganddropmodule,0); 
	PushSysvar(4,0); 
	PushVAP(Var_hdropMdraganddropmodule,0); 
	Dllfunc(1,4);
	// dadmlist@draganddropmodule +=sb@draganddropmodule+"\n"
	PushVar(Var_sbMdraganddropmodule,0); PushStr("\r\n"); CalcAddI(); 
	VarCalc(Var_dadmlistMdraganddropmodule,0,0);
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(6);
}

static void L0006( void ) {
	// DragFinish hdrop@draganddropmodule
	PushVAP(Var_hdropMdraganddropmodule,0); 
	Dllfunc(3,1);
	// if vartype(dadmlabel@draganddropmodule)=1
	PushFuncEnd(); 	PushVAP(Var_dadmlabelMdraganddropmodule,0); 
	PushIntfunc(7,1); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(36); return; }
	// gosub
	PushVAP(Var_dadmlabelMdraganddropmodule,0); 
	PushLabel(37); Prgcmd(1,2); return;
}

static void L0037( void ) {
	TaskSwitch(36);
}

static void L0036( void ) {
	// return 0
	PushInt(0); 
	Prgcmd(2,1);
	return;
	TaskSwitch(0);
}

static void L0000( void ) {
	// tm =0
	PushInt(0); 
	VarSet(Var_tm,0);
	// pl =0
	PushInt(0); 
	VarSet(Var_pl,0);
	// alltime =0
	PushInt(0); 
	VarSet(Var_alltime,0);
	// at =0
	PushInt(0); 
	VarSet(Var_at,0);
	// nt =0.000000
	PushDouble(0.000000); 
	VarSet(Var_nt,0);
	// pt =0
	PushInt(0); 
	VarSet(Var_pt,0);
	// vol =100
	PushInt(100); 
	VarSet(Var_vol,0);
	// spd =100
	PushInt(100); 
	VarSet(Var_spd,0);
	// lo =1
	PushInt(1); 
	VarSet(Var_lo,0);
	// ro =1
	PushInt(1); 
	VarSet(Var_ro,0);
	// nvol =10*vol
	PushInt(10); PushVar(Var_vol,0); CalcMulI(); 
	VarSet(Var_nvol,0);
	// nspd =10*spd
	PushInt(10); PushVar(Var_spd,0); CalcMulI(); 
	VarSet(Var_nspd,0);
	// roop =0
	PushInt(0); 
	VarSet(Var_roop,0);
	// mci "set HSP time format milliseconds"
	PushStr("set HSP time format milliseconds"); 
	Extcmd(11,1);
	// mci "set HSP audio all on"
	PushStr("set HSP audio all on"); 
	Extcmd(11,1);
	// dandd_setwindow 1
	PushInt(1); 
	PushLabel(38);
	Modcmd(4,1);
	return;
}

static void L0038( void ) {
	// dadmlabel@draganddropmodule =*L0007
	PushLabel(7); 
	VarSet(Var_dadmlabelMdraganddropmodule,0);
	// goto *L0008
	TaskSwitch(8);
	return;
	TaskSwitch(9);
}

static void L0009( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto *L0009
	TaskSwitch(9);
	return;
	TaskSwitch(8);
}

static void L0008( void ) {
	//  *L000a
	PushLabel(10); 
	Intcmd(0,1);
	// title "File player"
	PushStr("File player"); 
	Extcmd(16,1);
	// screen 0, 640, 480, 0
	PushInt(0); 
	PushInt(480); 
	PushInt(640); 
	PushInt(0); 
	Extcmd(42,4);
	// cls 4
	PushInt(4); 
	Extcmd(19,1);
	// objsize 60, 32
	PushInt(32); 
	PushInt(60); 
	Extcmd(22,2);
	// pos 0, 0
	PushInt(0); 
	PushInt(0); 
	Extcmd(17,2);
	// fname ="No file selected."
	PushStr("No file selected."); 
	VarSet(Var_fname,0);
	// button 	gosub "LOAD", *L000b
	PushLabel(11); 
	PushStr("LOAD"); 
	PushInt(1); Extcmd(0,3);
	// pos 60, 0
	PushInt(0); 
	PushInt(60); 
	Extcmd(17,2);
	// button 	gosub "PLAY", *L000c
	PushLabel(12); 
	PushStr("PLAY"); 
	PushInt(1); Extcmd(0,3);
	// pos 120, 0
	PushInt(0); 
	PushInt(120); 
	Extcmd(17,2);
	// button 	gosub "PAUSE", *L000d
	PushLabel(13); 
	PushStr("PAUSE"); 
	PushInt(1); Extcmd(0,3);
	// pos 180, 0
	PushInt(0); 
	PushInt(180); 
	Extcmd(17,2);
	// button 	gosub "STOP", *L000e
	PushLabel(14); 
	PushStr("STOP"); 
	PushInt(1); Extcmd(0,3);
	// pos 240, 0
	PushInt(0); 
	PushInt(240); 
	Extcmd(17,2);
	// button 	gosub "END", *L000a
	PushLabel(10); 
	PushStr("END"); 
	PushInt(1); Extcmd(0,3);
	// pos 300, 0
	PushInt(0); 
	PushInt(300); 
	Extcmd(17,2);
	// button 	gosub "EDIT", *L000f
	PushLabel(15); 
	PushStr("EDIT"); 
	PushInt(1); Extcmd(0,3);
	// pos 360, 0
	PushInt(0); 
	PushInt(360); 
	Extcmd(17,2);
	// chkbox "AUTO", roop
	PushVAP(Var_roop,0); 
	PushStr("AUTO"); 
	Extcmd(37,2);
	// pos 0, 30
	PushInt(30); 
	PushInt(0); 
	Extcmd(17,2);
	// mesbox fname, 500, 30
	PushInt(30); 
	PushInt(500); 
	PushVAP(Var_fname,0); 
	Extcmd(40,3);
	// gosub
	PushLabel(16); 
	PushLabel(39); Prgcmd(1,2); return;
}

static void L0039( void ) {
	//  /*ERROR*/	PushFuncEnd(); PushPrgcmd(1,0); PushLabel(17); 
	Intcmd(3,1);
	TaskSwitch(18);
}

static void L0018( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto *L0012
	TaskSwitch(18);
	return;
	TaskSwitch(7);
}

static void L0007( void ) {
	TaskSwitch(19);
}

static void L0019( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto *L0013
	TaskSwitch(19);
	return;
	TaskSwitch(11);
}

static void L0011( void ) {
	// dialog "wav;*.mid;*.mp3;*.avi;*.asf;*.wmv;*.wma;*.mpg", 16, "再生可能\ファイル"
	PushStr("再生可能\ファイル"); 
	PushInt(16); 
	PushStr("wav;*.mid;*.mp3;*.avi;*.asf;*.wmv;*.wma;*.mpg"); 
	Extcmd(3,3);
	TaskSwitch(40);
}

static void L0040( void ) {
	// if stat!=0
	PushSysvar(3,0); PushInt(0); CalcNeI(); 
	if (HspIf()) { TaskSwitch(41); return; }
	// gosub
	PushLabel(20); 
	PushLabel(42); Prgcmd(1,2); return;
}

static void L0042( void ) {
	TaskSwitch(41);
}

static void L0041( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(20);
}

static void L0020( void ) {
	// fname =refstr
	PushSysvar(12,0); 
	VarSet(Var_fname,0);
	// fn =getpath(fname, 8)
	PushFuncEnd(); 	PushInt(8); 
	PushVAP(Var_fname,0); 
PushIntfunc(260,2); 
	VarSet(Var_fn,0);
	// fk =getpath(fname, 2)
	PushFuncEnd(); 	PushInt(2); 
	PushVAP(Var_fname,0); 
PushIntfunc(260,2); 
	VarSet(Var_fk,0);
	// clrobj 7, 7
	PushInt(7); 
	PushInt(7); 
	Extcmd(48,2);
	// pos 0, 30
	PushInt(30); 
	PushInt(0); 
	Extcmd(17,2);
	// if (((((((((((((((fk=".wav"fk=".mid")|fk=".mp3")|fk=".avi")|fk=".asf")|fk=".wmv")|fk=".wma")|fk=".mpg")|fk=".WAV")|fk=".MID")|fk=".MP3")|fk=".AVI")|fk=".ASF")|fk=".WMV")|fk=".WMA")|fk=".MPG")|
	PushVar(Var_fk,0); PushStr(".wav"); CalcEqI(); PushVar(Var_fk,0); PushStr(".mid"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".mp3"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".avi"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".asf"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".wmv"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".wma"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".mpg"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".WAV"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".MID"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".MP3"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".AVI"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".ASF"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".WMV"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".WMA"); CalcEqI(); CalcOrI(); PushVar(Var_fk,0); PushStr(".MPG"); CalcEqI(); CalcOrI(); 
	if (HspIf()) { TaskSwitch(43); return; }
	// mci "close bgm"
	PushStr("close bgm"); 
	Extcmd(11,1);
	// pt =0
	PushInt(0); 
	VarSet(Var_pt,0);
	// mci ("open \""+fname)+"\" type mpegvideo alias bgm"
	PushStr("open \""); PushVar(Var_fname,0); CalcAddI(); PushStr("\" type mpegvideo alias bgm"); CalcAddI(); 
	Extcmd(11,1);
	// vol =100
	PushInt(100); 
	VarSet(Var_vol,0);
	// spd =100
	PushInt(100); 
	VarSet(Var_spd,0);
	// nvol =10*vol
	PushInt(10); PushVar(Var_vol,0); CalcMulI(); 
	VarSet(Var_nvol,0);
	// nspd =10*spd
	PushInt(10); PushVar(Var_spd,0); CalcMulI(); 
	VarSet(Var_nspd,0);
	// lo =1
	PushInt(1); 
	VarSet(Var_lo,0);
	// ro =1
	PushInt(1); 
	VarSet(Var_ro,0);
	// mci "setaudio bgm volume to "+nvol
	PushStr("setaudio bgm volume to "); PushVar(Var_nvol,0); CalcAddI(); 
	Extcmd(11,1);
	// mci "set bgm speed "+nspd
	PushStr("set bgm speed "); PushVar(Var_nspd,0); CalcAddI(); 
	Extcmd(11,1);
	// mci "status bgm length"
	PushStr("status bgm length"); 
	Extcmd(11,1);
	// strall =((strf("%02d", (stat/1000)/60)+":")+strf("%02d", (stat/1000)%60))+""
	PushFuncEnd(); 	PushSysvar(3,0); PushInt(1000); CalcDivI(); PushInt(60); CalcDivI(); 
	PushStr("%02d"); 
PushIntfunc(259,2); PushStr(":"); CalcAddI(); PushFuncEnd(); 	PushSysvar(3,0); PushInt(1000); CalcDivI(); PushInt(60); CalcModI(); 
	PushStr("%02d"); 
PushIntfunc(259,2); CalcAddI(); PushStr(""); CalcAddI(); 
	VarSet(Var_strall,0);
	// at =stat
	PushSysvar(3,0); 
	VarSet(Var_at,0);
	// pro ="Title : "+fn
	PushStr("Title : "); PushVar(Var_fn,0); CalcAddI(); 
	VarSet(Var_pro,0);
	// mci "info bgm product"
	PushStr("info bgm product"); 
	Extcmd(11,1);
	// pro +="\nProduct : "+refstr
	PushStr("\r\nProduct : "); PushSysvar(12,0); CalcAddI(); 
	VarCalc(Var_pro,0,0);
	// mci "capability bgm device type"
	PushStr("capability bgm device type"); 
	Extcmd(11,1);
	// pro +="\nType : "+refstr
	PushStr("\r\nType : "); PushSysvar(12,0); CalcAddI(); 
	VarCalc(Var_pro,0,0);
	// title ("File player ["+fn)+"]"
	PushStr("File player ["); PushVar(Var_fn,0); CalcAddI(); PushStr("]"); CalcAddI(); 
	Extcmd(16,1);
	// mesbox pro, 500, 30
	PushInt(30); 
	PushInt(500); 
	PushVAP(Var_pro,0); 
	Extcmd(40,3);
	TaskSwitch(44);
}

static void L0043( void ) {
	// else
	// fn ="Can't play file."
	PushStr("Can't play file."); 
	VarSet(Var_fn,0);
	// mesbox fn, 500, 30
	PushInt(30); 
	PushInt(500); 
	PushVAP(Var_fn,0); 
	Extcmd(40,3);
	// alltime =0
	PushInt(0); 
	VarSet(Var_alltime,0);
	TaskSwitch(44);
}

static void L0044( void ) {
	// gosub
	PushLabel(16); 
	PushLabel(45); Prgcmd(1,2); return;
}

static void L0045( void ) {
	TaskSwitch(12);
}

static void L0012( void ) {
	// pos 0, 64
	PushInt(64); 
	PushInt(0); 
	Extcmd(17,2);
	// if (fname!="No file selected."fn!="Can't play file.")|
	PushVar(Var_fname,0); PushStr("No file selected."); CalcNeI(); PushVar(Var_fn,0); PushStr("Can't play file."); CalcNeI(); CalcOrI(); 
	if (HspIf()) { TaskSwitch(46); return; }
	// mci "play bgm from "+pt
	PushStr("play bgm from "); PushVar(Var_pt,0); CalcAddI(); 
	Extcmd(11,1);
	// title ("File player ["+fn)+"](Play)"
	PushStr("File player ["); PushVar(Var_fn,0); CalcAddI(); PushStr("](Play)"); CalcAddI(); 
	Extcmd(16,1);
	// repeat
	PushLabel(21); 
	PushLabel(47); Prgcmd(4,2); return;
	TaskSwitch(47);
}

static void L0047( void ) {
	//  /*ERROR*/	PushFuncEnd(); PushPrgcmd(1,0); PushLabel(14); 
	Intcmd(1,1);
	// mci "status bgm position"
	PushStr("status bgm position"); 
	Extcmd(11,1);
	// pt =stat
	PushSysvar(3,0); 
	VarSet(Var_pt,0);
	// mci "status bgm tempo"
	PushStr("status bgm tempo"); 
	Extcmd(11,1);
	// tm =stat
	PushSysvar(3,0); 
	VarSet(Var_tm,0);
	// nt =double((pt*360)/at)
	PushFuncEnd(); 	PushVar(Var_pt,0); PushInt(360); CalcMulI(); PushVar(Var_at,0); CalcDivI(); 
PushIntfunc(389,1); 
	VarSet(Var_nt,0);
	// if nt>=360
	PushVar(Var_nt,0); PushInt(360); CalcGtEqI(); 
	if (HspIf()) { TaskSwitch(48); return; }
	// pt =0
	PushInt(0); 
	VarSet(Var_pt,0);
	// gosub
	PushLabel(14); 
	PushLabel(49); Prgcmd(1,2); return;
}

static void L0049( void ) {
	// break *L0015
	PushLabel(21); 
	Prgcmd(3,1);
	return;
	TaskSwitch(48);
}

static void L0048( void ) {
	// gosub
	PushLabel(16); 
	PushLabel(50); Prgcmd(1,2); return;
}

static void L0050( void ) {
	// await 100
	PushInt(100); 
	Prgcmd(8,1);
	TaskSwitch(51);
}

static void L0051( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(46);
}

static void L0046( void ) {
	TaskSwitch(21);
}

static void L0021( void ) {
	TaskSwitch(22);
}

static void L0022( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto *L0016
	TaskSwitch(22);
	return;
	TaskSwitch(13);
}

static void L0013( void ) {
	// mci "pause bgm"
	PushStr("pause bgm"); 
	Extcmd(11,1);
	// title ("File player ["+fname)+"](Pause)"
	PushStr("File player ["); PushVar(Var_fname,0); CalcAddI(); PushStr("](Pause)"); CalcAddI(); 
	Extcmd(16,1);
	TaskSwitch(23);
}

static void L0023( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto *L0017
	TaskSwitch(23);
	return;
	TaskSwitch(14);
}

static void L0014( void ) {
	// mci "close bgm"
	PushStr("close bgm"); 
	Extcmd(11,1);
	// pt =0
	PushInt(0); 
	VarSet(Var_pt,0);
	// spd =100
	PushInt(100); 
	VarSet(Var_spd,0);
	// vol =100
	PushInt(100); 
	VarSet(Var_vol,0);
	// lo =1
	PushInt(1); 
	VarSet(Var_lo,0);
	// ro =1
	PushInt(1); 
	VarSet(Var_ro,0);
	// title ("File player ["+fname)+"]"
	PushStr("File player ["); PushVar(Var_fname,0); CalcAddI(); PushStr("]"); CalcAddI(); 
	Extcmd(16,1);
	// mci ("open \""+fname)+"\" type mpegvideo alias bgm"
	PushStr("open \""); PushVar(Var_fname,0); CalcAddI(); PushStr("\" type mpegvideo alias bgm"); CalcAddI(); 
	Extcmd(11,1);
	// if roop=1
	PushVar(Var_roop,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(52); return; }
	// goto *L000c
	TaskSwitch(12);
	return;
	TaskSwitch(52);
}

static void L0052( void ) {
	// gosub
	PushLabel(16); 
	PushLabel(53); Prgcmd(1,2); return;
}

static void L0053( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(15);
}

static void L0015( void ) {
	// mci "close bgm"
	PushStr("close bgm"); 
	Extcmd(11,1);
	// if fk=".mid"
	PushVar(Var_fk,0); PushStr(".mid"); CalcEqI(); 
	if (HspIf()) { TaskSwitch(54); return; }
	// exec ("C:/DTM/DOMINO/Domino.exe "+fname)+""
	PushStr("C:/DTM/DOMINO/Domino.exe "); PushVar(Var_fname,0); CalcAddI(); PushStr(""); CalcAddI(); 
	Extcmd(2,1);
	TaskSwitch(55);
}

static void L0055( void ) {
	TaskSwitch(54);
}

static void L0054( void ) {
	// if fk=".wav"
	PushVar(Var_fk,0); PushStr(".wav"); CalcEqI(); 
	if (HspIf()) { TaskSwitch(56); return; }
	// exec ("C:/Program Files (x86)/SoundEngine Free/SoundEngine.exe "+fname)+""
	PushStr("C:/Program Files (x86)/SoundEngine Free/SoundEngine.exe "); PushVar(Var_fname,0); CalcAddI(); PushStr(""); CalcAddI(); 
	Extcmd(2,1);
	TaskSwitch(57);
}

static void L0057( void ) {
	TaskSwitch(56);
}

static void L0056( void ) {
	// wait 5000
	PushInt(5000); 
	Prgcmd(7,1);
	TaskSwitch(58);
}

static void L0058( void ) {
	// goto *L000e
	TaskSwitch(14);
	return;
	TaskSwitch(24);
}

static void L0024( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto *L0018
	TaskSwitch(24);
	return;
	TaskSwitch(10);
}

static void L0010( void ) {
	// mci "stop bgm"
	PushStr("stop bgm"); 
	Extcmd(11,1);
	// mci "close bgm"
	PushStr("close bgm"); 
	Extcmd(11,1);
	// end 
	Prgcmd(16,0);
	return;
	TaskSwitch(17);
}

static void L0017( void ) {
	// if (((0<=mousexmousex<=360)&70<=mousey)&mousey<=100)&
	PushInt(0); PushFuncEnd(); PushExtvar(0,0); CalcLtEqI(); PushFuncEnd(); PushExtvar(0,0); PushInt(360); CalcLtEqI(); CalcAndI(); PushInt(70); PushFuncEnd(); PushExtvar(1,0); CalcLtEqI(); CalcAndI(); PushFuncEnd(); PushExtvar(1,0); PushInt(100); CalcLtEqI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(59); return; }
	// gosub
	PushLabel(25); 
	PushLabel(60); Prgcmd(1,2); return;
}

static void L0060( void ) {
	TaskSwitch(59);
}

static void L0059( void ) {
	// if (((5<=mousexmousex<=35)&150<=mousey)&mousey<=250)&
	PushInt(5); PushFuncEnd(); PushExtvar(0,0); CalcLtEqI(); PushFuncEnd(); PushExtvar(0,0); PushInt(35); CalcLtEqI(); CalcAndI(); PushInt(150); PushFuncEnd(); PushExtvar(1,0); CalcLtEqI(); CalcAndI(); PushFuncEnd(); PushExtvar(1,0); PushInt(250); CalcLtEqI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(61); return; }
	// gosub
	PushLabel(26); 
	PushLabel(62); Prgcmd(1,2); return;
}

static void L0062( void ) {
	TaskSwitch(61);
}

static void L0061( void ) {
	// if (((55<=mousexmousex<=85)&150<=mousey)&mousey<=249)&
	PushInt(55); PushFuncEnd(); PushExtvar(0,0); CalcLtEqI(); PushFuncEnd(); PushExtvar(0,0); PushInt(85); CalcLtEqI(); CalcAndI(); PushInt(150); PushFuncEnd(); PushExtvar(1,0); CalcLtEqI(); CalcAndI(); PushFuncEnd(); PushExtvar(1,0); PushInt(249); CalcLtEqI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(63); return; }
	// gosub
	PushLabel(27); 
	PushLabel(64); Prgcmd(1,2); return;
}

static void L0064( void ) {
	TaskSwitch(63);
}

static void L0063( void ) {
	// if (((105<=mousexmousex<=135)&150<=mousey)&mousey<=180)&
	PushInt(105); PushFuncEnd(); PushExtvar(0,0); CalcLtEqI(); PushFuncEnd(); PushExtvar(0,0); PushInt(135); CalcLtEqI(); CalcAndI(); PushInt(150); PushFuncEnd(); PushExtvar(1,0); CalcLtEqI(); CalcAndI(); PushFuncEnd(); PushExtvar(1,0); PushInt(180); CalcLtEqI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(65); return; }
	// gosub
	PushLabel(28); 
	PushLabel(66); Prgcmd(1,2); return;
}

static void L0066( void ) {
	TaskSwitch(65);
}

static void L0065( void ) {
	// if (((155<=mousexmousex<=185)&150<=mousey)&mousey<=180)&
	PushInt(155); PushFuncEnd(); PushExtvar(0,0); CalcLtEqI(); PushFuncEnd(); PushExtvar(0,0); PushInt(185); CalcLtEqI(); CalcAndI(); PushInt(150); PushFuncEnd(); PushExtvar(1,0); CalcLtEqI(); CalcAndI(); PushFuncEnd(); PushExtvar(1,0); PushInt(180); CalcLtEqI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(67); return; }
	// gosub
	PushLabel(29); 
	PushLabel(68); Prgcmd(1,2); return;
}

static void L0068( void ) {
	TaskSwitch(67);
}

static void L0067( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(25);
}

static void L0025( void ) {
	// if at!=0
	PushVar(Var_at,0); PushInt(0); CalcNeI(); 
	if (HspIf()) { TaskSwitch(69); return; }
	// pt =int((at*mousex)/360)
	PushFuncEnd(); 	PushVar(Var_at,0); PushFuncEnd(); PushExtvar(0,0); CalcMulI(); PushInt(360); CalcDivI(); 
PushIntfunc(0,1); 
	VarSet(Var_pt,0);
	// nt =double((pt*360)/at)
	PushFuncEnd(); 	PushVar(Var_pt,0); PushInt(360); CalcMulI(); PushVar(Var_at,0); CalcDivI(); 
PushIntfunc(389,1); 
	VarSet(Var_nt,0);
	// mci "seek bgm to "+pt
	PushStr("seek bgm to "); PushVar(Var_pt,0); CalcAddI(); 
	Extcmd(11,1);
	// gosub
	PushLabel(16); 
	PushLabel(70); Prgcmd(1,2); return;
}

static void L0070( void ) {
	TaskSwitch(69);
}

static void L0069( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(26);
}

static void L0026( void ) {
	// vol =250-mousey
	PushInt(250); PushFuncEnd(); PushExtvar(1,0); CalcSubI(); 
	VarSet(Var_vol,0);
	// nvol =vol*10
	PushVar(Var_vol,0); PushInt(10); CalcMulI(); 
	VarSet(Var_nvol,0);
	// mci "setaudio bgm volume to "+nvol
	PushStr("setaudio bgm volume to "); PushVar(Var_nvol,0); CalcAddI(); 
	Extcmd(11,1);
	// mci "status bgm position"
	PushStr("status bgm position"); 
	Extcmd(11,1);
	// pt =stat
	PushSysvar(3,0); 
	VarSet(Var_pt,0);
	// mci "status bgm tempo"
	PushStr("status bgm tempo"); 
	Extcmd(11,1);
	// tm =stat
	PushSysvar(3,0); 
	VarSet(Var_tm,0);
	// gosub
	PushLabel(16); 
	PushLabel(71); Prgcmd(1,2); return;
}

static void L0071( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(27);
}

static void L0027( void ) {
	// spd =(250-mousey)*2
	PushInt(250); PushFuncEnd(); PushExtvar(1,0); CalcSubI(); PushInt(2); CalcMulI(); 
	VarSet(Var_spd,0);
	// nspd =spd*10
	PushVar(Var_spd,0); PushInt(10); CalcMulI(); 
	VarSet(Var_nspd,0);
	// mci "set bgm speed "+nspd
	PushStr("set bgm speed "); PushVar(Var_nspd,0); CalcAddI(); 
	Extcmd(11,1);
	// mci "status bgm position"
	PushStr("status bgm position"); 
	Extcmd(11,1);
	// pt =stat
	PushSysvar(3,0); 
	VarSet(Var_pt,0);
	// mci "status bgm tempo"
	PushStr("status bgm tempo"); 
	Extcmd(11,1);
	// tm =stat
	PushSysvar(3,0); 
	VarSet(Var_tm,0);
	// gosub
	PushLabel(16); 
	PushLabel(72); Prgcmd(1,2); return;
}

static void L0072( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(28);
}

static void L0028( void ) {
	// if lo=1
	PushVar(Var_lo,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(73); return; }
	// lo =0
	PushInt(0); 
	VarSet(Var_lo,0);
	// mci "set bgm audio left off"
	PushStr("set bgm audio left off"); 
	Extcmd(11,1);
	TaskSwitch(74);
}

static void L0073( void ) {
	// else
	// lo =1
	PushInt(1); 
	VarSet(Var_lo,0);
	// mci "set bgm audio left on"
	PushStr("set bgm audio left on"); 
	Extcmd(11,1);
	TaskSwitch(74);
}

static void L0074( void ) {
	// gosub
	PushLabel(16); 
	PushLabel(75); Prgcmd(1,2); return;
}

static void L0075( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(29);
}

static void L0029( void ) {
	// if ro=1
	PushVar(Var_ro,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(76); return; }
	// ro =0
	PushInt(0); 
	VarSet(Var_ro,0);
	// mci "set bgm audio right off"
	PushStr("set bgm audio right off"); 
	Extcmd(11,1);
	TaskSwitch(77);
}

static void L0076( void ) {
	// else
	// ro =1
	PushInt(1); 
	VarSet(Var_ro,0);
	// mci "set bgm audio right on"
	PushStr("set bgm audio right on"); 
	Extcmd(11,1);
	TaskSwitch(77);
}

static void L0077( void ) {
	// gosub
	PushLabel(16); 
	PushLabel(78); Prgcmd(1,2); return;
}

static void L0078( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(30);
}

static void L0030( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(16);
}

static void L0016( void ) {
	// redraw 0
	PushInt(0); 
	Extcmd(27,1);
	// color 0, 0, 0
	PushInt(0); 
	PushInt(0); 
	PushInt(0); 
	Extcmd(24,3);
	// boxf 0
	PushInt(0); 
	Extcmd(49,1);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// pos 0, 110
	PushInt(110); 
	PushInt(0); 
	Extcmd(17,2);
	// mes ("Volume\n"+vol)+"%"
	PushStr("Volume\r\n"); PushVar(Var_vol,0); CalcAddI(); PushStr("%"); CalcAddI(); 
	Extcmd(15,1);
	// boxf 5, 150, 35, 250
	PushInt(250); 
	PushInt(35); 
	PushInt(150); 
	PushInt(5); 
	Extcmd(49,4);
	// color 0, 0, 255
	PushInt(255); 
	PushInt(0); 
	PushInt(0); 
	Extcmd(24,3);
	// boxf 5, 250-vol, 35, 250
	PushInt(250); 
	PushInt(35); 
	PushInt(250); PushVar(Var_vol,0); CalcSubI(); 
	PushInt(5); 
	Extcmd(49,4);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// pos 50, 110
	PushInt(110); 
	PushInt(50); 
	Extcmd(17,2);
	// mes ("Speed\n"+spd)+"%"
	PushStr("Speed\r\n"); PushVar(Var_spd,0); CalcAddI(); PushStr("%"); CalcAddI(); 
	Extcmd(15,1);
	// boxf 55, 150, 85, 250
	PushInt(250); 
	PushInt(85); 
	PushInt(150); 
	PushInt(55); 
	Extcmd(49,4);
	// color 255, 0, 0
	PushInt(0); 
	PushInt(0); 
	PushInt(255); 
	Extcmd(24,3);
	// boxf 55, spd/2-250, 85, 250
	PushInt(250); 
	PushInt(85); 
	PushInt(250); PushVar(Var_spd,0); PushInt(2); CalcDivI(); CalcSubI(); 
	PushInt(55); 
	Extcmd(49,4);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// pos 100, 110
	PushInt(110); 
	PushInt(100); 
	Extcmd(17,2);
	// mes "Left"
	PushStr("Left"); 
	Extcmd(15,1);
	// boxf 105, 150, 135, 180
	PushInt(180); 
	PushInt(135); 
	PushInt(150); 
	PushInt(105); 
	Extcmd(49,4);
	// color 255, 180, 0
	PushInt(0); 
	PushInt(180); 
	PushInt(255); 
	Extcmd(24,3);
	// boxf 105, 150, 135, 30*lo+150
	PushInt(150); PushInt(30); PushVar(Var_lo,0); CalcMulI(); CalcAddI(); 
	PushInt(135); 
	PushInt(150); 
	PushInt(105); 
	Extcmd(49,4);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// pos 150, 110
	PushInt(110); 
	PushInt(150); 
	Extcmd(17,2);
	// mes "Right"
	PushStr("Right"); 
	Extcmd(15,1);
	// boxf 155, 150, 185, 180
	PushInt(180); 
	PushInt(185); 
	PushInt(150); 
	PushInt(155); 
	Extcmd(49,4);
	// color 255, 180, 0
	PushInt(0); 
	PushInt(180); 
	PushInt(255); 
	Extcmd(24,3);
	// boxf 155, 150, 185, 30*ro+150
	PushInt(150); PushInt(30); PushVar(Var_ro,0); CalcMulI(); CalcAddI(); 
	PushInt(185); 
	PushInt(150); 
	PushInt(155); 
	Extcmd(49,4);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// boxf 0, 70, 360, 100
	PushInt(100); 
	PushInt(360); 
	PushInt(70); 
	PushInt(0); 
	Extcmd(49,4);
	// pos 370, 75
	PushInt(75); 
	PushInt(370); 
	Extcmd(17,2);
	// mes ((((((("Time : "+strf("%02d", (pt/1000)/60))+":")+strf("%02d", (pt/1000)%60))+"/")+strall)+" Tempo : ")+tm)+"\n"
	PushStr("Time : "); PushFuncEnd(); 	PushVar(Var_pt,0); PushInt(1000); CalcDivI(); PushInt(60); CalcDivI(); 
		PushStr("%02d"); 
	PushIntfunc(259,2); CalcAddI(); PushStr(":"); CalcAddI(); PushFuncEnd(); 	PushVar(Var_pt,0); PushInt(1000); CalcDivI(); PushInt(60); CalcModI(); 
		PushStr("%02d"); 
	PushIntfunc(259,2); CalcAddI(); PushStr("/"); CalcAddI(); PushVar(Var_strall,0); CalcAddI(); PushStr(" Tempo : "); CalcAddI(); PushVar(Var_tm,0); CalcAddI(); PushStr("\r\n"); CalcAddI(); 
	Extcmd(15,1);
	// color 0, 255, 0
	PushInt(0); 
	PushInt(255); 
	PushInt(0); 
	Extcmd(24,3);
	// boxf 0, 70, int(nt), 100
	PushInt(100); 
	PushFuncEnd(); 	PushVAP(Var_nt,0); 
	PushIntfunc(0,1); 
	PushInt(70); 
	PushInt(0); 
	Extcmd(49,4);
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(31);
}

static void L0031( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto 
	Prgcmd(0,0);
	return;
}

//-End of Source-------------------------------------------

CHSP3_TASK __HspTaskFunc[]={
(CHSP3_TASK) L0000,
(CHSP3_TASK) L0001,	// dandd_setwindow
(CHSP3_TASK) L0002,
(CHSP3_TASK) L0003,	// dandd_getlist
(CHSP3_TASK) L0004,	// dandd_getpath
(CHSP3_TASK) L0005,	// dandd_getinfo
(CHSP3_TASK) L0006,
(CHSP3_TASK) L0007,
(CHSP3_TASK) L0008,
(CHSP3_TASK) L0009,
(CHSP3_TASK) L0010,
(CHSP3_TASK) L0011,
(CHSP3_TASK) L0012,
(CHSP3_TASK) L0013,
(CHSP3_TASK) L0014,
(CHSP3_TASK) L0015,
(CHSP3_TASK) L0016,
(CHSP3_TASK) L0017,
(CHSP3_TASK) L0018,
(CHSP3_TASK) L0019,
(CHSP3_TASK) L0020,
(CHSP3_TASK) L0021,
(CHSP3_TASK) L0022,
(CHSP3_TASK) L0023,
(CHSP3_TASK) L0024,
(CHSP3_TASK) L0025,
(CHSP3_TASK) L0026,
(CHSP3_TASK) L0027,
(CHSP3_TASK) L0028,
(CHSP3_TASK) L0029,
(CHSP3_TASK) L0030,
(CHSP3_TASK) L0031,
(CHSP3_TASK) L0032,
(CHSP3_TASK) L0033,
(CHSP3_TASK) L0034,
(CHSP3_TASK) L0035,
(CHSP3_TASK) L0036,
(CHSP3_TASK) L0037,
(CHSP3_TASK) L0038,
(CHSP3_TASK) L0039,
(CHSP3_TASK) L0040,
(CHSP3_TASK) L0041,
(CHSP3_TASK) L0042,
(CHSP3_TASK) L0043,
(CHSP3_TASK) L0044,
(CHSP3_TASK) L0045,
(CHSP3_TASK) L0046,
(CHSP3_TASK) L0047,
(CHSP3_TASK) L0048,
(CHSP3_TASK) L0049,
(CHSP3_TASK) L0050,
(CHSP3_TASK) L0051,
(CHSP3_TASK) L0052,
(CHSP3_TASK) L0053,
(CHSP3_TASK) L0054,
(CHSP3_TASK) L0055,
(CHSP3_TASK) L0056,
(CHSP3_TASK) L0057,
(CHSP3_TASK) L0058,
(CHSP3_TASK) L0059,
(CHSP3_TASK) L0060,
(CHSP3_TASK) L0061,
(CHSP3_TASK) L0062,
(CHSP3_TASK) L0063,
(CHSP3_TASK) L0064,
(CHSP3_TASK) L0065,
(CHSP3_TASK) L0066,
(CHSP3_TASK) L0067,
(CHSP3_TASK) L0068,
(CHSP3_TASK) L0069,
(CHSP3_TASK) L0070,
(CHSP3_TASK) L0071,
(CHSP3_TASK) L0072,
(CHSP3_TASK) L0073,
(CHSP3_TASK) L0074,
(CHSP3_TASK) L0075,
(CHSP3_TASK) L0076,
(CHSP3_TASK) L0077,
(CHSP3_TASK) L0078,
(CHSP3_TASK) 0,

};

/*-----------------------------------------------------------*/

STRUCTDAT __HspFuncInfo[]={
	{ 0,-3, 0,2,0,8,6, (void *)0 },
	{ 0,-3, 2,4,16,16,6, (void *)0 },
	{ 0,-3, 6,2,31,8,6, (void *)0 },
	{ 0,-3, 8,1,46,4,6, (void *)0 },
	{ -1,4, 9,1,57,0,1, (void *)0 },
	{ -1,5, 10,1,73,0,3, (void *)0 },
	{ -2,6, 11,1,87,0,4, (void *)0 },
	{ -2,7, 12,1,101,0,5, (void *)0 },
};

LIBDAT __HspLibInfo[]={
	{ 1,115, (void *)0, -1 },
};

STRUCTPRM __HspPrmInfo[]={
	{ 4, 0, 0 },
	{ 4, 0, 4 },
	{ 4, 1, 0 },
	{ 4, 1, 4 },
	{ -10, 1, 8 },
	{ 4, 1, 12 },
	{ 4, 2, 0 },
	{ -10, 2, 4 },
	{ 4, 3, 0 },
	{ 4, -1, 0 },
	{ -3, -1, 0 },
	{ 4, -1, 0 },
	{ 4, -1, 0 },
};

char __HspDataName[]="DragAcceptFiles\0"\
"DragQueryFileA\0"\
"DragQueryPoint\0"\
"DragFinish\0"\
"dandd_setwindow\0"\
"dandd_getlist\0"\
"dandd_getpath\0"\
"dandd_getinfo\0"\
"shell32.dll\0"\
;


/*-----------------------------------------------------------*/

void __HspInit( Hsp3r *hsp3 ) {
	hsp3->Reset( _HSP3CNV_MAXVAR, _HSP3CNV_MAXHPI );
	hsp3->SetDataName( __HspDataName );
	hsp3->SetFInfo( __HspFuncInfo, 224 );
	hsp3->SetLInfo( __HspLibInfo, 16 );
	hsp3->SetMInfo( __HspPrmInfo, 104 );
}

/*-----------------------------------------------------------*/

