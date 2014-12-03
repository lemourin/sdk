#import "megaapi.h"
#import "MEGASdk.h"

class DelegateMEGAGlobalListener : public mega::MegaGlobalListener {
    
public:
    
    DelegateMEGAGlobalListener(MEGASdk *megaSDK, id<MEGAGlobalDelegate> listener);
    id<MEGAGlobalDelegate> getUserListener();
    
    void onUsersUpdate(mega::MegaApi* api, mega::MegaUserList* userList);
    void onNodesUpdate(mega::MegaApi* api, mega::MegaNodeList* nodeList);
    void onReloadNeeded(mega::MegaApi* api);
    
private:
    MEGASdk *megaSDK;
    id<MEGAGlobalDelegate> listener;
};