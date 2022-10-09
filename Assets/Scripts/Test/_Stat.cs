using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class _Stat
{
    public UnitCode unitCode { get; }
    public string name { get; set; }
    public int friendship { get; set; }
    public int study { get; set; }
    public int money { get; set; }
    public int spec { get; set; }

    public _Stat()
    {

    }

    public _Stat(UnitCode unitCode, string name, int study, int friendship, int money, int spec)
    {
        this.unitCode = unitCode;
        this.name = name;
        this.friendship = friendship;
        this.study = study;
        this.money = money;
        this.spec = spec;
    }
    public _Stat SetUnitStat(UnitCode unitCode)
    {
        _Stat _stat = null;

        switch(unitCode)
        {
            case UnitCode.Human1:
                _stat = new _Stat(unitCode, "Human1", 30, 20, 15, 50);
                break;
            case UnitCode.Human2:
                _stat = new _Stat(unitCode, "Human2", 40, 30, 30, 15);
                break;
            case UnitCode.Human3:
                _stat = new _Stat(unitCode, "Human3", 50, 20, 30, 40);
                break;
            case UnitCode.Human4:
                _stat = new _Stat(unitCode, "Human4", 30, 30, 20, 40);
                break;
            case UnitCode.Human5:
                _stat = new _Stat(unitCode, "Human5", 40, 15, 30, 20);
                break;
        }
        return _stat;
    }
}