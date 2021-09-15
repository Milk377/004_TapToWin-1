using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RuneWordCombination
{
    
    public string MakingRuneWord(string _str)
    {
        string result = "";

        switch(_str)
        {
            case "1111111111":
                result = "Power";
                break;
            case "1111111112":
                result = "Speed";
                break;
            case "1111111113":
                result = "Health";
                break;

                // 추가되는 룬워드 조합은 여기 기술

            default:
                result = "Basic";
                break;




        }

        return result;
      
    }
}