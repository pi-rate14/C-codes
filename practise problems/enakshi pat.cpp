class percentage{
private:
    string name;
    int reg;
    float total,percent;
    public:
    void get_details();
}
float
void percentage::get_details()
{
    gets(name);
    cin<<reg;
    cin<<total;
    x = get_percent(total);
}
int main()
{
    percentage student[3];
    for (int i=0;i<3;i++)
    {
        student[i].get_details();



