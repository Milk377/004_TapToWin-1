using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;


public class RuneWordSystem : MonoBehaviour
{
    public Text combination;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ResetRune()
    {
        combination.text = "";
    }
    public void run_func1()
    {
        combination.text += '1';
    }

    public void run_func2()
    {
        combination.text += '2';
    }

    public void run_func3()
    {
        combination.text += '3';
    }

    public void run_func4()
    {
        combination.text += '4';
    }
}
