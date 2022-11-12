using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class StatDistribute : MonoBehaviour
{
    public TMP_Text statsText;
    public TMP_Text sociabilityText;
    public TMP_Text learningAbilityText;
    public TMP_Text economicAbilityText;
    public TMP_Text specAbilityText;
    public Slider sociabilitySlider;
    public Slider learningAbilitySlider;
    public Slider economicAbilitySlider;
    public Slider specAbilitySlider;
    public float Sociability { get; private set; } = 0f;
    public float LearningAbility { get; private set; } = 0f;
    public float EconomicAbility { get; private set; } = 0f;
    public float SpecAbility { get; private set; } = 0f;

    private int stats = 12;

    #region sociability
    public void OnClickPlusSociability()
    {
        if (Sociability < 10 && 0 < stats)
        {
            stats--;
            Sociability++;
        }

        if (stats <= 0)
        {
            stats = 0;
        }

        StartCoroutine(ChangeSociability());
        sociabilityText.text = Sociability.ToString();
        statsText.text = stats.ToString();
    }

    public void OnClickMinusSociability()
    {
        if (0 < Sociability)
        {
            stats++;
            Sociability--;
        }

        if (12 <= stats)
        {
            stats = 12;
        }

        StartCoroutine(ChangeSociability());
        sociabilityText.text = Sociability.ToString();
        statsText.text = stats.ToString();
    }

    private IEnumerator ChangeSociability()
    {
        float timer = 0.0f;
        float destination = Sociability * 10f;
        while (timer <= 0.3f)
        {
            timer += Time.deltaTime;
            sociabilitySlider.value = Mathf.Lerp(sociabilitySlider.value, destination, timer);
            yield return null;
        }
    }
    #endregion

    #region LearningAbility
    public void OnClickPlusLearningAbility()
    {
        if (LearningAbility < 10 && 0 < stats)
        {
            stats--;
            LearningAbility++;
        }

        if (stats <= 0)
        {
            stats = 0;
        }

        StartCoroutine(ChangeLearningAbility());
        learningAbilityText.text = LearningAbility.ToString();
        statsText.text = stats.ToString();
    }

    public void OnClickMinusLearningAbility()
    {
        if (0 < LearningAbility)
        {
            stats++;
            LearningAbility--;
        }

        if (12 <= stats)
        {
            stats = 12;
        }

        StartCoroutine(ChangeLearningAbility());
        learningAbilityText.text = LearningAbility.ToString();
        statsText.text = stats.ToString();
    }

    private IEnumerator ChangeLearningAbility()
    {
        float timer = 0.0f;
        float destination = LearningAbility * 10f;
        while (timer <= 0.3f)
        {
            timer += Time.deltaTime;
            learningAbilitySlider.value = Mathf.Lerp(learningAbilitySlider.value, destination, timer);
            yield return null;
        }
    }
    #endregion

    #region EconomicAbility
    public void OnClickPlusEconomicAbility()
    {
        if (EconomicAbility < 10 && 0 < stats)
        {
            stats--;
            EconomicAbility++;
        }

        if (stats <= 0)
        {
            stats = 0;
        }

        StartCoroutine(ChangeEconomicAbility());
        economicAbilityText.text = EconomicAbility.ToString();
        statsText.text = stats.ToString();
    }

    public void OnClickMinusEconomicAbility()
    {
        if (0 < EconomicAbility)
        {
            stats++;
            EconomicAbility--;
        }

        if (12 <= stats)
        {
            stats = 12;
        }

        StartCoroutine(ChangeEconomicAbility());
        economicAbilityText.text = EconomicAbility.ToString();
        statsText.text = stats.ToString();
    }

    private IEnumerator ChangeEconomicAbility()
    {
        float timer = 0.0f;
        float destination = EconomicAbility * 10f;
        while (timer <= 0.3f)
        {
            timer += Time.deltaTime;
            economicAbilitySlider.value = Mathf.Lerp(economicAbilitySlider.value, destination, timer);
            yield return null;
        }
    }
    #endregion

    #region SpecAbility
    public void OnClickPlusSpecAbility()
    {
        if (SpecAbility < 10 && 0 < stats)
        {
            stats--;
            SpecAbility++;
        }

        if (stats <= 0)
        {
            stats = 0;
        }

        StartCoroutine(ChangeSpecAbility());
        specAbilityText.text = SpecAbility.ToString();
        statsText.text = stats.ToString();
    }

    public void OnClickMinusSpecAbility()
    {
        if (0 < SpecAbility)
        {
            stats++;
            SpecAbility--;
        }

        if (12 <= stats)
        {
            stats = 12;
        }

        StartCoroutine(ChangeSpecAbility());
        specAbilityText.text = SpecAbility.ToString();
        statsText.text = stats.ToString();
    }

    private IEnumerator ChangeSpecAbility()
    {
        float timer = 0.0f;
        float destination = SpecAbility * 10f;
        while (timer <= 0.3f)
        {
            timer += Time.deltaTime;
            specAbilitySlider.value = Mathf.Lerp(specAbilitySlider.value, destination, timer);
            yield return null;
        }
    }
    #endregion

}
