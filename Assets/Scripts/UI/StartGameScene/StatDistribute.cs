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
    public Slider sociabilitySlider;
    public Slider learningAbilitySlider;

    static int stats = 12;
    static int sociability = 0;
    static int learningAbility = 0;

    #region sociability
    public void OnClickPlusSociability()
    {
        if (sociability < 10 && 0 < stats)
        {
            stats--;
            sociability++;
        }

        if (stats <= 0)
        {
            stats = 0;
        }

        StartCoroutine(ChangeSociability());
        sociabilityText.text = sociability.ToString();
        statsText.text = stats.ToString();
    }

    public void OnClickMinusSociability()
    {
        if (0 < sociability)
        {
            stats++;
            sociability--;
        }

        if (12 <= stats)
        {
            stats = 12;
        }

        StartCoroutine(ChangeSociability());
        sociabilityText.text = sociability.ToString();
        statsText.text = stats.ToString();
    }

    private IEnumerator ChangeSociability()
    {
        float timer = 0.0f;
        float destination = sociability * 10f;
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
        if (learningAbility < 10 && 0 < stats)
        {
            stats--;
            learningAbility++;
        }

        if (stats <= 0)
        {
            stats = 0;
        }

        StartCoroutine(ChangeLearningAbility());
        learningAbilityText.text = learningAbility.ToString();
        statsText.text = stats.ToString();
    }

    public void OnClickMinusLearningAbility()
    {
        if (0 < learningAbility)
        {
            stats++;
            learningAbility--;
        }

        if (12 <= stats)
        {
            stats = 12;
        }

        StartCoroutine(ChangeLearningAbility());
        learningAbilityText.text = learningAbility.ToString();
        statsText.text = stats.ToString();
    }

    private IEnumerator ChangeLearningAbility()
    {
        float timer = 0.0f;
        float destination = learningAbility * 10f;
        while (timer <= 0.3f)
        {
            timer += Time.deltaTime;
            learningAbilitySlider.value = Mathf.Lerp(learningAbilitySlider.value, destination, timer);
            yield return null;
        }
    }
    #endregion

}
