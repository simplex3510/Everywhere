using UnityEngine;
using System.Collections;
using static UnityEngine.RuleTile.TilingRuleOutput;

public class PlayerController : MonoBehaviour
{
    [SerializeField] float speed = 10f;
    Rigidbody2D rigid; //물리이동을 위한 변수 선언 
    private Animator animator; //애니매이터 선언
    SpriteRenderer spriteRenderer; //스프라이트렌더
    Vector3 mousePos, transPos, targetPos;

    private void Awake()
    {
        animator = GetComponent<Animator>(); //애니매이터 받
        rigid = GetComponent<Rigidbody2D>(); //변수 초기화 
        spriteRenderer = GetComponent<SpriteRenderer>(); //애니매이터받
    }
   
    void Update()
    {
        if (Input.GetMouseButton(0))
            CalTargetPos();

        MoveToTarget();
    }

    void CalTargetPos()
    {
        mousePos = Input.mousePosition;
        transPos = Camera.main.ScreenToWorldPoint(mousePos);
        targetPos = new Vector3(transPos.x, transPos.y, 0);
    }

    void MoveToTarget()
    {
        transform.position = Vector3.MoveTowards(transform.position, targetPos, Time.deltaTime * speed);

        if (transPos.x != 0)
        {
            if (transPos.x > 0)
            {
                animator.SetInteger("WalkDirection", 3);
                transform.localScale = new Vector3(0.35f, 0.33f, 0);   // Right flip
            }
            else if (transPos.x < 0)
            {
                animator.SetInteger("WalkDirection", 3);
                transform.localScale = new Vector3(-0.35f, 0.33f, 0);   // Left flip
            }
        }

            if (transPos.y != 0)
            {
                if (transPos.y > 0)
                {
                    animator.SetInteger("WalkDirection", 4);
                }
                else if (transPos.y < 0)
                {
                    animator.SetInteger("WalkDirection", 1);
                }
            }
     
            else animator.SetInteger("WalkDirection", 0);
    }
}
            /*
              Vector2 mouseDragPostion = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
              Vector2 worldObjectPosition = Camera.main.ScreenToWorldPoint(mouseDragPostion);
              this.transform.position = worldObjectPosition;

              Debug.Log(worldObjectPosition);
              Debug.Log(this.transform.position);
             
            Vector2 endPos = Input.mousePosition;
            float swipeLength = endPos.x - this.startPos.x;
            float swipeHeight = endPos.y - this.startPos.y;

            /*if (swipeLength < 0)
               swipeLength *= -1;

           if (swipeHeight < 0)
               swipeHeight *= -1;
            
            this.speed = swipeLength / 50000;
           this.speed2 = swipeHeight / 50000;

          if (endPos.x - this.startPos.x < 0)
               this.speed *= -1;

           if (endPos.y - this.startPos.y < 0)
               this.speed2 *= -1;

            transform.Translate(this.speed, this.speed2, 0);
            this.speed *= 0.98f;
            this.speed2 *= 0.98f;
    */
     


   /*
    void FixedUpdate()
    {
        float h = Input.GetAxisRaw("Horizontal"); //수평
        float t = Input.GetAxisRaw("Vertical"); //수직
        if (Input.GetAxisRaw("Horizontal") > 0)
        {
            transform.localScale = new Vector3(0.35f, 0.33f, 1);   // Right flip
        }
        else if (Input.GetAxisRaw("Horizontal") < 0)
        {
            transform.localScale = new Vector3(-0.35f, 0.33f, 1);   // Left flip
        }
        rigid.velocity = new Vector2(h * maxSpeed, t * maxSpeed);

        if(rigid.velocity.y != 0)
        {
            if (rigid.velocity.y > 0)
            {
                animator.SetInteger("WalkDirection", 4);
            }
            else if (rigid.velocity.y < 0)
            {
                animator.SetInteger("WalkDirection", 1);
            }
        }
        else if (rigid.velocity.x != 0)
        {
            if (rigid.velocity.x > 0)
            {
                animator.SetInteger("WalkDirection", 3);
            }
            else if (rigid.velocity.x < 0)
            {
                animator.SetInteger("WalkDirection", 2);
            }
        }
        else animator.SetInteger("WalkDirection", 0);
        */


        /*
        //Max speed Right
        if (rigid.velocity.x > maxSpeed)  //오른쪽으로 이동 (+) , 최대 속력을 넘으면 
            rigid.velocity = new Vector2(0, rigid.velocity.y); //해당 오브젝트의 속력은 maxSpeed 

        //Max speed left
        else if (rigid.velocity.x < maxSpeed * (-1)) // 왼쪽으로 이동 (-) 
            rigid.velocity = new Vector2(0 * (-1), rigid.velocity.y); //y값은 점프의 영향이므로 0으로 제한을 두면 안됨

        //Max speed back
        if (rigid.velocity.y > maxSpeed)  //뒤로 이동 (+) , 최대 속력을 넘으면 
            rigid.velocity = new Vector2(rigid.velocity.x, 0); //해당 오브젝트의 속력은 maxSpeed 

        //Max speed front
        else if (rigid.velocity.y < maxSpeed * (-1)) // 앞으로 이동 (-) 
            rigid.velocity = new Vector2(rigid.velocity.x, 0);
    }
}
        */