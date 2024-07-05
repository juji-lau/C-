
// Make an enumerator for MenuItemCodes:
enum MenuItemCode {
    cClearToolInfo = 1,
    cEnterToolInfo,
    cPrintToolInfo,
    cQuitItem
};

class Menu
{
    public:
        /*Prints out the menu to the user. It determines the “number” to put in 
        parenthesis before each menu choice*/
        void showMenu();
        MenuItemCode promptUser();
};