#include <iostream>
using namespace std;

enum class BillKind {
    ONE, FIVE, TEN, TWENTY
};

struct CashInOneBillKind {
    BillKind kind;
    int count;
};

struct Cash {
    CashInOneBillKind ones;
    CashInOneBillKind fives;
    CashInOneBillKind tens;
    CashInOneBillKind twenties;
};

int totalCash(Cash* c) {
    return (
        c->ones.count * 1 +
        c->fives.count * 5 +
        c->tens.count * 10 +
        c->twenties.count * 20
    );
}

int main() {
    Cash inWallet {
        {BillKind::ONE, 500},
        {BillKind::FIVE, 800},
        {BillKind::TEN, 1000},
        {BillKind::TWENTY, 200000}
    };

    cout << "Total Cash in Wallet: " << totalCash(&inWallet) << endl;

    Cash* dwallet = new Cash {
        {BillKind::ONE, 500},
        {BillKind::FIVE, 800},
        {BillKind::TEN, 1000},
        {BillKind::TWENTY, 200000}
    };

    cout << "Total Cash in Wallet: " << totalCash(dwallet) << endl;

    delete dwallet;

    return 0;
}