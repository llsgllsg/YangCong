#include <bits/stdc++.h>
#include <windows.h>
#include <direct.h>
using namespace std;

string g_programRootPath;
void setupADBPath() {
    char buffer[MAX_PATH] = {0};
    GetModuleFileNameA(NULL, buffer, MAX_PATH);
    string fullPath = buffer;
    g_programRootPath = fullPath.substr(0, fullPath.find_last_of("\\"));
    string adbDir = g_programRootPath + "\\platform-tools";
    if (access((adbDir + "\\adb.exe").c_str(), 0) == 0) {
        _chdir(adbDir.c_str());
    } else {
        cout << "文件缺失，请重新下载";
        return;
    }
}

void executeAndWait(const string& cmd, int waitMs = 0) {
    system(cmd.c_str());
    Sleep(waitMs);
}

int main(){
    setupADBPath();
    cout << "欢迎使用全自动桌面部署工具\n";
    cout << "作者:M0Xsystem 梦想\n";
    cout << "特别鸣谢:M0Xsystem 零\n";
    cout << "顾问:豆包AI\n";
    cout << "输入y开始部署:";
    char cif;
    cin >> cif;
    if (cif != 'y') {
        cout << "感谢使用";
        return 0;
    }
    system("cls");
    

    executeAndWait("adb devices", 2000);
    executeAndWait("adb shell pm uninstall --user 0 com.yangcong345.cloud.launcher", 3000);
    
    cout << "\n 开始下一个步骤\n";
    string apkAbsolutePath = g_programRootPath + "\\desktop.apk";
    string installCmd = "adb install -r \"" + apkAbsolutePath + "\"";
    executeAndWait(installCmd, 5000);
    
    cout << "\n 开始下一个步骤\n";
    Sleep(5000);
    string setHomeCmd = "adb shell cmd package set-home-activity amirz.shade/.ShadeLauncher";
    executeAndWait(setHomeCmd, 2000);
    
    cout << "\n 开始下一个步骤 设备会重启\n";
    executeAndWait("adb reboot");
    return 0;
}
