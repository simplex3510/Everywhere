using UnityEngine;
using System.Collections;
using static UnityEngine.RuleTile.TilingRuleOutput;

public class PlayerController : MonoBehaviour
{
    [SerializeField] float speed = 10f;
    Rigidbody2D rigid; //�����̵��� ���� ���� ���� 
    private Animator animator; //�ִϸ����� ����
    SpriteRenderer spriteRenderer; //��������Ʈ����
    Vector3 mousePos, transPos, targetPos;

    private void Awake()
    {
        animator = GetComponent<Animator>(); //�ִϸ����� ��
        rigid = GetComponent<Rigidbody2D>(); //���� �ʱ�ȭ 
        spriteRenderer = GetComponent<SpriteRenderer>(); //�ִϸ����͹�
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
        float h = Input.GetAxisRaw("Horizontal"); //����
        float t = Input.GetAxisRaw("Vertical"); //����
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
        if (rigid.velocity.x > maxSpeed)  //���������� �̵� (+) , �ִ� �ӷ��� ������ 
            rigid.velocity = new Vector2(0, rigid.velocity.y); //�ش� ������Ʈ�� �ӷ��� maxSpeed 

        //Max speed left
        else if (rigid.velocity.x < maxSpeed * (-1)) // �������� �̵� (-) 
            rigid.velocity = new Vector2(0 * (-1), rigid.velocity.y); //y���� ������ �����̹Ƿ� 0���� ������ �θ� �ȵ�

        //Max speed back
        if (rigid.velocity.y > maxSpeed)  //�ڷ� �̵� (+) , �ִ� �ӷ��� ������ 
            rigid.velocity = new Vector2(rigid.velocity.x, 0); //�ش� ������Ʈ�� �ӷ��� maxSpeed 

        //Max speed front
        else if (rigid.velocity.y < maxSpeed * (-1)) // ������ �̵� (-) 
            rigid.velocity = new Vector2(rigid.velocity.x, 0);
    }
}
        */