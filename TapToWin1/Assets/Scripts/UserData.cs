using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserData : MonoBehaviour
{

    public int itemCount;
    // Update is called once per frame
    void saveData()
    {
        PlayerPrefs.SetInt("itemCount_data", itemCount);

    }

    void LoadData()
    {
        itemCount = PlayerPrefs.GetInt("itemCount_data");

    }

    void DeleteSaveData(string _str)
    {
        PlayerPrefs.DeleteKey(_str);
    }
}
