using UnityEngine;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class MonitorPlaneParent : MonoBehaviour
    {
        private static GameObject monitorPlane;
        private static GameObject sphereChild;

        private void Start()
        {

            monitorPlane = GameObject.Find("Monitor_Plane(Clone)") as GameObject;
            sphereChild = GameObject.Find("Sphere");
            if (TableAnchor.Instance != null) transform.parent = monitorPlane.transform;
        }
    }
}
