using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;


public class RuneWordSystem : MonoBehaviour
{
    public Text combination;
    public Text ItemResult;

    public RuneWordCombination rwc;

    private string result = "";


    // Start is called before the first frame update
    void Start()
    {
        // 생성자 호출로 초기화 해야만 인스턴스 사용이 가능함
        rwc = new RuneWordCombination();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetRune()
    {
        Debug.Log("Set Runeword.");
        ItemResult.text = rwc.MakingRuneWord(combination.text);


    }

    public void ResetRune()
    {
        Debug.Log("Reset combination.");
        combination.text = "";

    }


    public void run_func1()
    {
        Debug.Log("Rune number 1");
        if (combination.text.Length < ValueLimitation.MAX_RUNE_LENGTH)
        {
            combination.text += '1';
        }
        else
        {
            Debug.Log("[SYSTEM] : Can't add rune. already Maximum length");
        }
       
    }

    public void run_func2()
    {

        Debug.Log("Rune number 2");
        if (combination.text.Length < ValueLimitation.MAX_RUNE_LENGTH)
        {
            combination.text += '2';
        }
        else
        {
            Debug.Log("[SYSTEM] : Can't add rune. already Maximum length");
        }
    }

    public void run_func3()
    {

        Debug.Log("Rune number 3"); if (combination.text.Length < ValueLimitation.MAX_RUNE_LENGTH)
        {
            combination.text += '3';
        }
        else
        {
            Debug.Log("[SYSTEM] : Can't add rune. already Maximum length");
        }
    }

    public void run_func4()
    {

        Debug.Log("Rune number 4"); if (combination.text.Length < ValueLimitation.MAX_RUNE_LENGTH)
        {
            combination.text += '4';
        }
        else
        {
            Debug.Log("[SYSTEM] : Can't add rune. already Maximum length");
        }
    }
}
