//
// Created by yanfeng on 2020-08-07.
//

#ifndef FIRSTCPP_TABTENN1_H
#define FIRSTCPP_TABTENN1_H

#include <string>

using namespace std;

class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn = "none", const string &ln = "home", bool ht = false);

    void Name() const;

    bool HasTable() const { return hasTable; };

    void ResetTable(bool v) { hasTable = v; };
};

class RatedPlayer : public TableTennisPlayer {
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);

    RatedPlayer(unsigned int r, const TableTennisPlayer &tp);

    unsigned int Rating() const { return rating; };

    void ResetRating(unsigned int r) { rating = r; };
};

#endif //FIRSTCPP_TABTENN1_H
