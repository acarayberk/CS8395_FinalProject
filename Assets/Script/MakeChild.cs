using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MakeChild : MonoBehaviour
{
    private GameObject monitorPlane;
    public GameObject childShpere;
    // Start is called before the first frame update
    void Start()
    {
        //childShpere = GameObject.Find("Sphere");
        monitorPlane = GameObject.Find("Monitor_Plane");
        childShpere.transform.parent = monitorPlane.transform;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
