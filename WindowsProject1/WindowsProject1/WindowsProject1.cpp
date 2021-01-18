#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, PSTR szCmdLine, int iCmdShow) {

	while (int ans1 = MessageBox(NULL, L"看得见消息框吗", L"one", MB_YESNO)) {
		if (ans1 == IDYES) {
			MessageBox(NULL, L"嗯，看见就好", L"two", MB_OK);
			if (MessageBox(NULL, L"重试吗", L"three", MB_RETRYCANCEL) == IDCANCEL) break;
			else continue;
		}
		else if (ans1 = IDNO) {
			MessageBox(NULL, L"你睁大眼睛仔细瞧瞧，我就是消息框啊！", L"five", MB_OK);
		}
	}


	return 0;
}