 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TechXR.Core.Sense;

public class ControlsManager : MonoBehaviour
{
    public SenseController senseController;
    bool teleportMove = true;
    Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (SenseInput.GetButtonDown(ButtonName.D))
            animator.Play("open");
        else if (SenseInput.GetButtonUp(ButtonName.D))
            animator.Play("close");

        if(SenseInput.GetButtonDown(ButtonName.C))
        {
            senseController.ToggleTeleportMovement(!teleportMove);
            senseController.ToggleJoystickMovement(teleportMove);

            teleportMove = !teleportMove;
        }
    }
}
