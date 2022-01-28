#include <iostream>
#include <windows.h>
#include "bios.h"
#include "stream.h"
#include "devman.h"
#include "skCrypter.h"
#include "xorstr.hpp"
#include <random>
#include <filesystem>
#include <Windows.h>
#include <string>
//Basic includes
#include <iostream>
#include <Windows.h>
#include <thread>
#include <string>
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <vector>
#include <vector>
#include <math.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <tchar.h>
#include <winioctl.h>
#include <Uxtheme.h>
#include <dwmapi.h>
#include <WinInet.h>
#include "xorstr.hpp"
#include <Mmsystem.h>
#include <mciapi.h>
#include <shobjidl_core.h>
#include <direct.h>
#include <urlmon.h>
#include <random>


#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <Windows.h>
#include <winioctl.h>
#include <random>
#include <msxml.h>    
#include <atomic>
#include <mutex>
#include <Windows.h>
#include <TlHelp32.h>
#include <cstdint>
#include <vector>
#include <random>
#include <memoryapi.h>
#include <string>
#include <thread>
#include <chrono>
#include <iostream>
#include <string_view>
#include <mutex>
#include <chrono>

#include <iostream>
#include <fstream>
#include <cstdint>
#include <filesystem>
namespace fs = std::filesystem;

RECT rc;
std::string random_string(const int len) { /*  For Cool Responses  */
	const std::string alpha_numeric("ABCDEFGHIJKLMNOPRSTUVZ1234567890");
	std::default_random_engine generator{ std::random_device{}() };
	const std::uniform_int_distribution< std::string::size_type > distribution{ 0, alpha_numeric.size() - 1 };
	std::string str(len, 0);
	for (auto& it : str) {
		it = alpha_numeric[distribution(generator)];
	}

	return str;
}

void system_no_output(std::string command)
{
	command.insert(0, "/C ");

	SHELLEXECUTEINFOA ShExecInfo = { 0 };
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = "cmd.exe";
	ShExecInfo.lpParameters = command.c_str();
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL;

	if (ShellExecuteExA(&ShExecInfo) == FALSE)

		WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

	DWORD rv;
	GetExitCodeProcess(ShExecInfo.hProcess, &rv);
	CloseHandle(ShExecInfo.hProcess);
}

void changevolumeid()
{
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe a: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe b: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe c: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe d: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe e: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe f: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe g: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe h: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe i: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe j: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe k: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe l: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe m: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe n: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe o: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe p: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe r: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe s: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe t: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe u: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe v: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe y: " + random_string(4) + "-" + random_string(4));
	Sleep(1000);
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe z: " + random_string(4) + "-" + random_string(4));
}


void changemiscserials()
{
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SS %RANDOM%HP-TRGT%RANDOM%AB").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SV 2%RANDOM%HP-TRGT%RANDOM%RV").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 8%RANDOM%HP-TRGT%RANDOM%SG").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SU auto").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 5%RANDOM%HP-TRGT%RANDOM%SL").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BM 4%RANDOM%HP-TRGT%RANDOM%FA").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BS 6%RANDOM%HP-TRGT%RANDOM%FU").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BV 3%RANDOM%HP-TRGT%RANDOM%DQ").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /PSN 7%RANDOM%HP-TRGT%RANDOM%MST").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SM HOPESA-RSPPOF").c_str());
	Sleep(5000);
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SS %RANDOM%HP-TRGT%RANDOM%AB").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SV 2%RANDOM%HP-TRGT%RANDOM%RV").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 8%RANDOM%HP-TRGT%RANDOM%SG").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SU auto").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 5%RANDOM%HP-TRGT%RANDOM%SL").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BM 4%RANDOM%HP-TRGT%RANDOM%FA").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BS 6%RANDOM%HP-TRGT%RANDOM%FU").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BV 3%RANDOM%HP-TRGT%RANDOM%DQ").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /PSN 7%RANDOM%HP-TRGT%RANDOM%MST").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SM HOPESA-RSPPOF").c_str());
	Sleep(5000);
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SS %RANDOM%HP-TRGT%RANDOM%AB").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SV 2%RANDOM%HP-TRGT%RANDOM%RV").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 8%RANDOM%HP-TRGT%RANDOM%SG").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SU auto").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 5%RANDOM%HP-TRGT%RANDOM%SL").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BM 4%RANDOM%HP-TRGT%RANDOM%FA").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BS 6%RANDOM%HP-TRGT%RANDOM%FU").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BV 3%RANDOM%HP-TRGT%RANDOM%DQ").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /PSN 7%RANDOM%HP-TRGT%RANDOM%MST").c_str());
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SM HOPESA-RSPPOF").c_str());
}

int main()
{
	SetConsoleTitleA(XorStr("Hopesars Driverless Fud Spoofer").c_str());
	std::cout << XorStr("\n Hello Welcome To Hopesar#7502 s Driverless Fully Undetected Free Spoofer");
	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\DevManView.cfg").c_str(), reinterpret_cast<const char*>(devmanviewcfg_bytes), sizeof(devmanviewcfg_bytes));//bunar diskdrive için
	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\DevManView.chm").c_str(), reinterpret_cast<const char*>(devmanviewchm_bytes), sizeof(devmanviewchm_bytes));//bunar diskdrive için
	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\DevManView.exe").c_str(), reinterpret_cast<const char*>(devmanviewexe_bytes), sizeof(devmanviewexe_bytes));//bunar diskdrive için
	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\amide.sys").c_str(), reinterpret_cast<const char*>(amide_bytes), sizeof(amide_bytes));//bunar diðerleri için
	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\amifldrv64.sys").c_str(), reinterpret_cast<const char*>(amifldrv64_bytes), sizeof(amifldrv64_bytes));//bunar diðerleri için
	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe").c_str(), reinterpret_cast<const char*>(fakemapper_bytes), sizeof(fakemapper_bytes));//bunar diðerleri için
	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe").c_str(), reinterpret_cast<const char*>(VolumeShity), sizeof(VolumeShity));//bunar diðerleri için
	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\Disk.bat").c_str(), reinterpret_cast<const char*>(testbat_bytes), sizeof(testbat_bytes));
	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\SerialC.bat").c_str(), reinterpret_cast<const char*>(hwidcheck), sizeof(hwidcheck));
	
	
	if (std::filesystem::exists("C:\\ProgramData\\Microsoft\\Windows\\SPOOFED2.bat"))
	{
		std::cout << XorStr("\n (If A Window Called VolumeId Pop Ups Press Agree)");
		system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe c: " + random_string(4) + "-" + random_string(4));
		system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\SPOOFED2.bat").c_str());
		std::cout << XorStr("\n Hello! Thanks For Restarting PC!");
		std::cout << XorStr("\n Now Lets Start Last Part Of Spoofing");
		Sleep(4000);
		std::cout << XorStr("\n");
		std::cout << XorStr("\n Spoofing...");
		system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\Disk.bat").c_str());
		Sleep(4000);
		std::cout << XorStr("\n %25 Done");
		changemiscserials();
		Sleep(4000);
		std::cout << XorStr("\n %50 Done");
		changevolumeid();
		Sleep(4000);
		std::cout << XorStr("\n %80 Done");
		//system(XorStr("C:\\ProgramData\\Microsoft\\Windows\\SerialC.bat").c_str());
		system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\DevManView.cfg").c_str());
		system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\DevManView.chm").c_str());
		system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\DevManView.exe").c_str());
		system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\amide.sys").c_str());
		system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\amifldrv64.sys").c_str());
		system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe").c_str());
		system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\Disk.bat").c_str());
		std::cout << XorStr("\n %100 Done");
		std::cout << XorStr("\n");
		std::cout << XorStr("\n Spoofing Is Done! Now Spoofer Will Run Serial Checker! Check Your Serials");
		Sleep(4000);
	    system(XorStr("C:\\ProgramData\\Microsoft\\Windows\\SerialC.bat").c_str());
		Sleep(-1);
	}  

	CreateFileFromMemory(XorStr("C:\\ProgramData\\Microsoft\\Windows\\SPOOFED2.bat").c_str(), reinterpret_cast<const char*>(hwidcheck), sizeof(hwidcheck));
	std::cout << XorStr("\n Starting Driverless Spoofing Process!");
	std::cout << XorStr("\n (If A Window Called VolumeId Pop Ups Press Agree)");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe c: " + random_string(4) + "-" + random_string(4));
	std::cout << XorStr("\n It Will Take Like 1 Minute And Will Be 4 Steps");
	Sleep(3000);
	std::cout << XorStr("\n Okay Lets Start");
	std::cout << XorStr("\n");
	Sleep(3000);
	system_no_output(XorStr("C:\\ProgramData\\Microsoft\\Windows\\Disk.bat").c_str());
	
	std::cout << XorStr("\n Step 1 Is Done!");
	Sleep(5000);
	
	changemiscserials();

	std::cout << XorStr("\n");
	std::cout << XorStr("\n Step 2 Is Done!");
	
	Sleep(5000);
	std::cout << XorStr("\n (IF IT ASKS FOR AGGRE FOR VOLUMDEID PRESS AGGRE ON EVERY WINDOW)");
	changevolumeid();

	std::cout << XorStr("\n Step 3 Is Done!");
	std::cout << XorStr("\n");
	std::cout << XorStr("\n !NOTE WE DETECTED U RUNNED IN FIRST TIME SO PLEASE RESTART PC AND RUN AGAIN!");
	std::cout << XorStr("\n !SO ALL SERIAL CHANGES CAN EFFECT JUST RESTART UR PC AND OPEN THIS SPOOFER AGAIN!");
	std::cout << XorStr("\n !!!! YOU ARE REQUIRED TO RESTART PC AND RUN SPOOFER AGAIN IF U WANT SPOOFER TO WORK!!!!");
	//system(XorStr("C:\\ProgramData\\Microsoft\\Windows\\SerialC.bat").c_str());
	system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\DevManView.cfg").c_str());
	system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\DevManView.chm").c_str());
	system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\DevManView.exe").c_str());
	system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\amide.sys").c_str());
	system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\amifldrv64.sys").c_str());
	system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe").c_str());
	system_no_output(XorStr("del C:\\ProgramData\\Microsoft\\Windows\\Disk.bat").c_str());
	Sleep(-1);
}