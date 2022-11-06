using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using EveryWhere.Base;
using TMPro;

namespace EveryWhere.Manger
{
    public class GameManager : SingletonMonoBase<GameManager>
    {
        public Player player;

        [SerializeField] private TMP_Text nickname;
        [SerializeField] private Toggle genderMale;

        public void InitalizePlayer()
        {
            player = new Player(nickname.text, genderMale.isOn, 0, 0, 0, 0);
        }
    }
}