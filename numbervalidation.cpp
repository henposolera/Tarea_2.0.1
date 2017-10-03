int validInput()
{
    int x;
    std::cin >> x;
    while(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Bad entry.  Enter a NUMBER: ";
        std::cin >> x;
    }
    return x;
}
