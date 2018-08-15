class Money {
    public:     
        int dollar;
        int cent;

        Money operator + (Money money) {
            Money *result = new Money();
            result->dollar = money.dollar + this->dollar;
            result->cent = money.cent + this->cent;
            result->dollar += result->cent / 100;
            result->cent = result->cent % 100; 
            return *result;
        }
};