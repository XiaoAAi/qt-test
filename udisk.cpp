#include "udisk.h"

UDISK::UDISK()
{

}

//bool UDISK::nativeEventFilter(const QByteArray &eventType, void *message, long *result)
//{
//    MSG* msg = reinterpret_cast<MSG *>(message);
//    int msgType = msg->message;
//}


//char UDISK::FirstDriveFromMask(ULONG unitmask)
//{
//    char i;
//    for(i=0; i<26; ++i)
//    {
//        if(unitmask & 0x1)
//        {
//            break;
//        }
//        unitmask = unitmask >> 1;
//    }
//    return (i + 'A');
//}
