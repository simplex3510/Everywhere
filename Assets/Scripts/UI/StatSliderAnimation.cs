using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;

public class StatSliderAnimation : MonoBehaviour
{
    public Stat statData;
    public Slider sociabilitySlider;
    public Slider learningAbilitySlider;
    public Slider economicAbilitySlider;
    public Slider specAbilitySlider;

    public void OnClickStat()
    {
        StartCoroutine(SlideAnimation());
    }

    private IEnumerator SlideAnimation()
    {
        float timer = 0.0f;
        while (timer <= 0.3f)
        {
            timer += Time.deltaTime;
            sociabilitySlider.value = Mathf.Lerp(sociabilitySlider.value, statData.sociability, timer);
            learningAbilitySlider.value = Mathf.Lerp(learningAbilitySlider.value, statData.learningAbility, timer);
            economicAbilitySlider.value = Mathf.Lerp(economicAbilitySlider.value, statData.economicAbility, timer);
            specAbilitySlider.value = Mathf.Lerp(specAbilitySlider.value, statData.specAbility, timer);
            yield return null;
        }
    }
}
